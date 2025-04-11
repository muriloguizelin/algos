#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = 31; k >= 0; k--) {
                if (((a[j] >> k) & 1) && !((a[i] >> k) & 1)) {
                    a[i] |= (1 << k);
                    a[j] &= ~(1 << k);
                }
            }
        }
    }

    sort(a.rbegin(), a.rend());
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}