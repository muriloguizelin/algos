/*
Dois ponteiros que começam em 0, eles vão andando e adicionando valores no set e depois removendo, o que acontece é que 
se já houver o valor no set ele vai substituir e seguir a vida, ele remove o valor inicial no set
até que remova o valor encontrado, ou seja nao importa a ordem
*/
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int i = 0, j = 0, ans = 0;
            unordered_set<char> st;
            while (j < s.length()) {
                while (st.find(s[j]) != st.end()) {
                    st.erase(s[i]);
                    i++;
                }
                st.insert(s[j]);
                ans = max(ans, j - i + 1);
                j++;
            }
            return ans;
        }
    };