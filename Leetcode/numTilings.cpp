class Solution {
    public:
        const int MOD = 1e9 + 7;
        int memo[1001];
    
        int f(int n){
            if(n == 0 or n == 1) return 1;
            if(n == 2) return 2;
            if(memo[n] != -1) return memo[n];
            return memo[n] = ((f(n-1)*2)%MOD + f(n-3)%MOD)%MOD;
        }
    
        int numTilings(int n) {
            memset(memo, -1, sizeof(memo));
            return f(n);
        }
    };