#include <bits/stdc++.h>

using namespace std;

//usou buble sort, ou mergesort, usando swap do cpp
int main(){
    int N;
    cin >> N;
    // cria um vetor de tamanho N
    vector<int> v(N);

    // le as posições de chegada
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    int ans = 0;


    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            if(v[i] > v[j]){
                // troca os valores
                swap(v[i], v[j]);
                ans++;
            }
        }
    }
    cout << ans << endl;
}