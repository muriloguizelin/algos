/**
 * author: Murilo Guizelin
 * date: 2025-05-21
 * hour: 19:19:38
 * Link: https://leetcode.com/problems/time-needed-to-buy-tickets/submissions/1640720106/
 */

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;

        for (int i = 0; i < tickets.size(); ++i) {
            if (i <= k) {
                ans += min(tickets[i], tickets[k]);
            } else {
                ans += min(tickets[i], tickets[k] - 1);
            }
        }

        return ans;
    }
};