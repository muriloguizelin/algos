#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> digits;
    for (char c : to_string(n)) {
        digits.push_back(c - '0');
    }

    sort(digits.begin(), digits.end());

    for (size_t i = 0; i < digits.size(); ++i) {
        cout << digits[i];
        if (i != digits.size() - 1) cout << ',';
    }

    return 0;
}
