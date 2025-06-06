/**
 * author: Murilo Guizelin
 * date: 2025-06-04
 * hour: 14:39:09
 * Link: https://leetcode.com/problems/move-zeroes/submissions/1654045861/
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[pos] = nums[i];
                pos++;
            }
        }
        while (pos < nums.size()) {
            nums[pos] = 0;
            pos++;
        }
    }
};
