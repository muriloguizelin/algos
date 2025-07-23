/**
 * author: Murilo Guizelin
 * date: 2025-07-02
 * hour: 18:45:57
 * Link: https://cses.fi/problemset/task/1633/
 */

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int main() {
    int n;
    cin >> n;

    vector<int> dp(n+1);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i - j >= 0)
                dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }
    cout << dp[n] << '\n';
    return 0;
}
