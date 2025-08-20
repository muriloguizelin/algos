#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<int> entradas(n);
    vector<int> saidas(n);
    for(int i=0;i<n;i++) cin >> entradas[i] >> saidas[i];
    
    vector<pair<int, int>> eventos;
    for(int i=0;i<n;i++){
        eventos.push_back({entradas[i], 1});
        eventos.push_back({saidas[i], -1});
    }
    
    sort(eventos.begin(), eventos.end());
    
    int atual = 0, clientes = 0;
    for(auto evento : eventos){
        atual += evento.second;
        clientes = max(clientes, atual);
    }
    
    cout << clientes << endl;
      
    return 0;
}