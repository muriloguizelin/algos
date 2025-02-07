#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        cout << max(n, m) + 1 << endl;
        
    }
    return 0;
}