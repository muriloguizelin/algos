#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
// Algoritmo de complexidade O(n^2), onde todos os elementos do vetor são acessados e comparados repetidamente.
// O objetivo é garantir que cada par de elementos adjacentes esteja na ordem correta, realizando trocas quando necessário.
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) cin >> array[i];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (array[j] > array[j + 1]){
                swap(array[j], array[j + 1]);
            }
        }
    }
}
