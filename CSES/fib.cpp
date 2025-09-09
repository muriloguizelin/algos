#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << "\n";
        return 0;
    }

    vector<long long> fib(n+1);
    fib[0] = 0;
    fib[1] = 1;
    for (long long i = 2; i <= n; i++) {
        fib[i] = (fib[i-1] + fib[i-2]) % MOD;
    }

    cout << fib[n] << "\n";
    return 0;
}
