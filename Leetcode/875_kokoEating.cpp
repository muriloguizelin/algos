/**
 * author: Murilo Guizelin
 * date: 2025-07-24
 * hour: 19:26:21
 * Link: https://leetcode.com/problems/koko-eating-bananas/description/
 */

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long left = 1, right = *max_element(piles.begin(), piles.end());
        long long res = right;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long hours = 0;

            for (int p : piles)
                hours += (p + mid - 1) / mid;

            if (hours <= h) {
                res = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return (int)res;
    }
};
