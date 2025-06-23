/**
 * author: Murilo Guizelin
 * date: 2025-06-04
 * hour: 14:13:37
 * Link: https://leetcode.com/problems/roman-to-integer/
 */

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hashmap = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && hashmap[s[i]] < hashmap[s[i + 1]]) {
                res -= hashmap[s[i]];
            } else {
                res += hashmap[s[i]];
            }
        }
        return res;
    }
};

