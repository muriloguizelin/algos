#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
//algoritmo O(n^2), todos os elementos são acessados e verificados se estão corretos
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
