/**
 * author: Murilo Guizelin
 * date: 2025-05-15
 * hour: 21:32:15
 * Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/
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

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            string s = to_string(a);
            if(s.size() % 2 == 0) ans++;
        }
        return ans;
    }
};