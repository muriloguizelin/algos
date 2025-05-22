/**
 * author: Murilo Guizelin
 * date: 2025-05-21
 * hour: 19:18:45
 * Link: https://leetcode.com/problems/find-the-difference/description/
 */

class Solution {
public:
    char findTheDifference(string s, string t) {
        int sums = 0, sumt = 0;
        for(auto c : s) sums += c;
        for(auto c : t) sumt += c;
        return (char)(sumt-sums);
    }
};
