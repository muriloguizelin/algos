/**
 * author: Murilo Guizelin
 * date: 2025-05-16
 * hour: 12:07:41
 * Link: https://leetcode.com/problems/running-sum-of-1d-array/description/
 */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> x;
        int soma = 0;
        for(auto y:nums){
            soma += y;
            x.push_back(soma);
        }
        return x;
    }
};