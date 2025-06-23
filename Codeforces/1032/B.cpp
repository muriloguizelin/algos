#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }
        bool res = false;
        for (int i = 1; i < n - 1; i++) {
            if (freq[s[i] - 'a'] > 1) {
                res = true;
                break;
            }
        }

        if (res) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}