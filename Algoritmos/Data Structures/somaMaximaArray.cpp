#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
//este algoritmo se chama Kadane e é a melhor forma de achar a soma maxima de um sub array, O(n)
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    int best = 0, sum = 0;

    for (int k = 0; k < n; k++){
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }

    cout << best << "\n";
}
