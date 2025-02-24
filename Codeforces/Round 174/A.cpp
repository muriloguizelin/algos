/**
 * author: Murilo Guizelin
 * date: 2025-02-18
 * hour: 10:35:02
 * Link: https://codeforces.com/contest/2069
 */

#include <bits/stdc++.h>
 
using namespace std;
 
bool canArrayExist(int n, const vector<int>& b) {
  
    if (n == 3) {
        return true;
    }
    
   
    for (int i = 0; i < b.size() - 2; i++) {
        if (i + 2 < b.size() && b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1) {
            return false;
        }
    }
    
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> b(n - 2);
        for (int i = 0; i < n - 2; i++) {
            cin >> b[i];
        }
        
        cout << (canArrayExist(n, b) ? "YES\n" : "NO\n");
    }
    
    return 0;
}