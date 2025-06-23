/**
 * author: Murilo Guizelin
 * date: 2025-06-04
 * hour: 14:14:30
 * Link: https://leetcode.com/problems/is-subsequence/description/
 */

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = 0;
        int tam = s.size();
        for(int i=0;i<t.size();i++) if(s[n] == t[i]) n++;
        return n == tam ? true : false;
    }
};