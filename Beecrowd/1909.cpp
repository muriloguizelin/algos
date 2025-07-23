#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int n, t;
    while (cin >> n >> t && (n || t)) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool usado[100005] = {0};
        for (int i = 0; i < n; i++) usado[a[i]] = true;

        int resp = -1;
        for (int x = 2; x <= t; x++) {
            if (t % x != 0 || usado[x]) continue;

            int mmc = x;
            for (int i = 0; i < n; i++) {
                mmc = lcm(mmc, a[i]);
                if (mmc > t) break;
            }

            if (mmc == t) {
                resp = x;
                break; // achou o menor possível
            }
        }

        if (resp == -1) cout << "impossivel\n";
        else cout << resp << "\n";
    }
    return 0;
}