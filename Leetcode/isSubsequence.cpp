class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int somas = 0;
            int somat = 0;
            while (somas < s.length() && somat < t.length()) {
                if (s[somas] == t[somat]) {
                    somas++;
                }
                somat++;
            }
            return somas == s.length();        
        }
    };