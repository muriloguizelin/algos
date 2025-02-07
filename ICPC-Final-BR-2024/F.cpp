#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int k, n;
    cin >> k >> n;

    int k2 = k + k;
    int k3 = k + k2;

    if (n < k2 - 1 || k3 < n) {
        cout << "*";
    } else if (n == k2 - 1) {
        for (int i = 0; i < k - 1; ++i) {
            cout << "X-";
        }
        cout << "X";
    } else {
        for (int i = 0; i < k3 - n; ++i) {
            cout << "X-";
        }
        for (int i = 0; i < n - k2; ++i) {
            cout << "-X-";
        }
    }

    return 0;
}
