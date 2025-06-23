/**
 * author: Murilo Guizelin
 * date: 2025-06-01
 * hour: 22:48:00
 * Link: https://leetcode.com/problems/valid-anagram/description/
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
