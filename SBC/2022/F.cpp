#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;
    cin >> n >> c;

    map<string, int> m;
    int maxx = -1;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int star_pos = -1;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '*') {
                star_pos = j;
                break;
            }
        }

        if (star_pos != -1) {
            for (int k = 0; k < 26; k++) {
                s[star_pos] = (char)('a' + k);
                m[s]++;
            }
        }
    }
    string ch = "";
    for (auto const& pair : m) {
        if (pair.second > maxx) {
            maxx = pair.second;
            ch = pair.first;
        }
    }

    cout << ch << '\n' << maxx << endl;

    return 0;
}