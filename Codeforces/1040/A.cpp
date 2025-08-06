#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int t; cin >> t;
    
    while(t--) {
        int n; cin >> n;
        vector<int> s(n);
        
        for(int i = 0; i < n; i++) cin >> s[i];
        
        int maxScore = 0;
        for(int mask = 1; mask < (1 << n); mask++) {
            vector<int> subset;
            int sum = 0;
            
            for(int i = 0; i < n; i++) {
                if(mask & (1 << i)) {
                    subset.push_back(s[i]);
                    sum += s[i];
                }
            }
            
            sort(subset.begin(), subset.end());
            int mex = 0;
            for(int x : subset) if(x == mex) mex++;
            maxScore = max(maxScore, max(sum, mex));
        }
        
        cout << maxScore << "\n";
    }
    
    return 0;
}