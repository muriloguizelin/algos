#include <bits/stdc++.h>

using namespace std;
//https://codeforces.com/contest/2067/problem/A 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        int diff = x + 1 - y;
        if(diff >= 0 && diff % 9 == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}