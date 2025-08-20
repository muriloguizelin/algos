#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, res = 0;
    cin >> n;
    unordered_map<int, int> flechas;
    for (int i = 0; i < n; i++) {
        int balao;
        cin >> balao;
        if (flechas[balao] == 0){
            flechas[balao - 1]++;
            res++;
        } else {
            flechas[balao]--;
            flechas[balao - 1]++;
        } 
    }
    cout << res << endl;
    return 0;
}