#include <bits/stdc++.h>

using namespace std;
/*
Mesmo que o Coin 1 só que o Loop externo se torna o interno
ways = {1, 0, 1, 1, 1, 2, 2, 2}, ans = 2
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    
    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];

    const int MOD = 1e9 + 7;
    vector<long long> ways(x + 1, 0);
    ways[0] = 1;

    for (int c : coins) {
        for (int sum = c; sum <= x; sum++) {
            ways[sum] = (ways[sum] + ways[sum - c]) % MOD;
        }
    }   

    cout << ways[x] << "\n";
}
