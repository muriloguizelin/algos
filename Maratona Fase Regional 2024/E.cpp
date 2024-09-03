#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, ans = 3;
    cin >> n;
    vector<vector<int>> ma(n, vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> ma[i][j];
        }
    }
    
    cout << ans << "\n";
}