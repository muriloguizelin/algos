#include <bits/stdc++.h>

using namespace std;
//https://codeforces.com/contest/2067/problem/B
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
       
        int M = n + n/2; 
        vector<int> freq(M+1, 0);
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
           
            freq[x]++;
        }
 
      
        int maxCarry = 2*n; 
        vector<vector<bool>> dp(M+2, vector<bool>(maxCarry+1, false));
        dp[1][0] = true; 
 
       
        for (int x = 1; x <= M; x++){
            for (int carry = 0; carry <= maxCarry; carry++){
                if(!dp[x][carry]) continue;
                int F = freq[x] + carry;
               
                for (int k = 0; k <= F; k++){
                    int rem = F - k; 
                    if(rem % 2 != 0) continue;
                    
                    if(k > 0 && rem < 2) continue;
                   
                    if(k <= maxCarry){
                        dp[x+1][k] = true;
                    }
                }
            }
        }
 
        
        if(dp[M+1][0])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}