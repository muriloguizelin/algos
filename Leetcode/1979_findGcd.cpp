/**
 * author: Murilo Guizelin
 * date: 2025-06-25
 * hour: 15:27:10
 * Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/
 */

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return gcd(nums[0], nums.back());
    }
};