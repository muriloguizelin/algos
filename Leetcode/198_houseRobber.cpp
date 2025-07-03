/**
 * author: Murilo Guizelin
 * date: 2025-07-02
 * hour: 18:43:16
 * Link: 
 */

// Versão obsoleta usando recursão.
class Solution {
public:
    int n;
    int dp(int i, vector<int>& lucro) {
        if (i >= n) return 0;
        int roubar = lucro[i] + dp(i + 2,lucro);
        int pular = dp(i + 1,lucro);
        return max(roubar, pular);
    }
    int rob(vector<int>& nums) {
        n = nums.size();
        return dp(0, nums);
    }
};

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
        }

        return dp[n-1];
    }
};
