/**
 * author: Murilo Guizelin
 * date: 2025-05-14
 * hour: 18:35:10
 * Link: https://leetcode.com/problems/contains-duplicate/
 */



class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            if(set.contains(nums[i])) return true;
            set.insert(nums[i]);
        }
        return false;
    }
};