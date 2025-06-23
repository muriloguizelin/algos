#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;

vector<bool> isPrime;

void sieve(int n) {
    isPrime.assign(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

bool isComposite(int x) {
    return x > 1 && !isPrime[x];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    sieve(n);
    for (int x = 4; x <= n / 2; x++) {
        int y = n - x;
        if (isComposite(x) && isComposite(y)) {
            cout << x << " " << y << '\n';
            return 0;
        }
    }

    return 0;
}
