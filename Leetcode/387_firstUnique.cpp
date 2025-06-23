/**
 * author: Murilo Guizelin
 * date: 2025-06-02
 * hour: 00:21:10
 * Link: https://leetcode.com/problems/first-unique-character-in-a-string/
 */

class Solution {
public:
    int firstUniqChar(std::string s) {
        unordered_map<char, int> map;        
        for (char c : s) {
            map[c]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (map[s[i]] == 1) {
                return i;
            }
        }       
        return -1;
    }
};