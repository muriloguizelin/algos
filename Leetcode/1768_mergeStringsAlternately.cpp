/**
 * author: Murilo Guizelin
 * date: 2025-06-04
 * hour: 14:13:59
 * Link: https://leetcode.com/problems/merge-strings-alternately/ 
 */

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int s1 = word1.size();
        int s2 = word2.size();
        int w1 = 0, w2 = 0;
        for (int i = 0; i < s1 + s2; i++) {
            if (w1 < s1) {
                s += word1[w1++];
            }
            if (w2 < s2) {
                s += word2[w2++];
            }
        }
        return s;
    }
};


