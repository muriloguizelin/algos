class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int res = 0;
            int minPrice = prices[0];
            for (int i = 1; i < prices.size(); i++) {
                int profit = prices[i] - minPrice;
                res = max(res, profit);
                minPrice = min(minPrice, prices[i]);
            }
    
            return res;
        }
    };

// Abordagem usando programação dinamica
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        vector<int> dp(n, 0); // dp[i] = lucro máximo até o dia i
        int minPrice = prices[0];

        for (int i = 1; i < n; i++) {
            dp[i] = max(dp[i - 1], prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }

        return dp[n - 1];
    }
};
