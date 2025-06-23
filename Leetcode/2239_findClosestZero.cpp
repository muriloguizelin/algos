/**
 * author: Murilo Guizelin
 * date: 2025-06-04
 * hour: 14:13:10
 * Link: https://leetcode.com/problems/find-closest-number-to-zero/
 */

class Solution {
    public:
        int findClosestNumber(vector<int>& nums) {
            int res = nums[0];
            for (int i = 1; i < nums.size(); i++) {
                if (abs(nums[i]) < abs(res)) {
                    res = nums[i];
                } else if (abs(nums[i]) == abs(res) && nums[i] > res) {
                    res = nums[i];
                }
            }
            return res;
        }
    };
    