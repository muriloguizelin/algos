#include <bits/stdc++.h>

using namespace std;
/*
Quando houver um * no S e nao tiver ele em T então houve um colapso, 
a razao é colapsado / superposicao.
*/
int main() {
    int qubits;
    string S, T;
    cin >> qubits;
    cin >> S;
    cin >> T;
    
    int colapsados = 0;
    int superposicao = 0;
    
    for (int i = 0; i < qubits; i++){
      if (S[i] == '*'){
        superposicao++;
        if (T[i] != '*'){
          colapsados++;
        }
      }
    }
    
    double taxa_decoerencia = static_cast<double>(colapsados) / superposicao;
    
    cout << fixed << setprecision(2) << taxa_decoerencia << endl;
    
    return 0;
    
}