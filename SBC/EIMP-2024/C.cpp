#include <bits/stdc++.h>

using namespace std;

int main(){
 int n;
 cin >> n;

vector<vector<char>> matriz(n, vector<char>(n, 0));

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> matriz[i][j];
    }
}

bool simetrica = true;
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(matriz[i][j] != matriz[j][i]){
            simetrica = false;
            break;
        }
    }
}
    cout << (simetrica ? "Sim" : "Nao") << endl;
}