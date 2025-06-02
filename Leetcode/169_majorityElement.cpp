/**
 * author: Murilo Guizelin
 * date: 2025-06-01
 * hour: 22:47:30
 * Link: https://leetcode.com/problems/majority-element/description/
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int atual = 0;   
        for (int num : nums) {
            if (cnt == 0) {
                atual = num;
            }      
            if (num == atual) {
                cnt++;
            } else {
                cnt--;
            }
        }  
        return atual;
    }
};