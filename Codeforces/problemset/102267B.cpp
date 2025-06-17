/**
 * author: Murilo Guizelin
 * date: 2025-06-15
 * hour: 20:02:16
 * Link: https://codeforces.com/problemset/gymProblem/102267/B
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    if(n < 4) {
        cout << -1 << "\n";
        return 0;
    }    
    vector<bool> primo(n+1, true);
    primo[0] = primo[1] = false;
    for(int i=2;i*i<=n;i++){
        if(primo[i]){
            for(int j=i*i;j<=n;j+=i){
                primo[j] = false;
            }
        }
    }
    for(int i = 2; i <= n/2; i++){
        if(primo[i] && primo[n-i]){
            cout << i << " " << (n-i) << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}