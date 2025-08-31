#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> componentes;

void dfs(vector<vector<int>>& grafo, vector<bool>& visitados, int v){
   visitados[v] = true;
   componentes.push_back(v);
   
   for(auto& u : grafo[v]){
     if(!visitados[u])
      dfs(grafo, visitados, u);
   }
}

int main() 
{
    int n_teste;
    cin >> n_teste; // quantidade de casos de teste.
    for(int t = 0; t < n_teste; t++){
        cout << "Case #" << t + 1<< ":" << endl;
        int n, m;
        char x, y;
        cin >> n >> m;
        vector<vector<int>> grafo(n);
        for(int e = 0; e < m; e++){
           cin >> x >> y;
           int xx = x - 'a';
           int yy = y - 'a';
           grafo[xx].push_back(yy);
           grafo[yy].push_back(xx);
        }
        vector<bool> visitados(n, false);
        int ans = 0;
        
        for(int v = 0; v < n; v++){
           if(!visitados[v]){
             componentes.clear();
             ans++;
             dfs(grafo, visitados, v);
             sort(componentes.begin(), componentes.end());
             for(auto& c : componentes) cout << (char)(c + 'a') << ",";
             cout << endl;
           }
        }
        cout << ans << " connected components" << endl;
        cout << endl;
    }
    
    
    return 0;
}