#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
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
        cout << ans;
} 