#include <bits/stdc++.h>

using namespace std;
/* Programação Dinamica é linda, ele vai fazendo as somas de cada valor
quando chegar no valor final ele verifica os quantas formas tem de formar as suas sub somas.
3 9
2 3 5
ways = {1, 0, 1, 1, 1, 3, 2, 5, 6, 8}, ans = 8 % MOD
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

    for (int sum = 1; sum <= x; sum++) {
        for (int c : coins) {
            if (sum >= c) {
                ways[sum] = (ways[sum] + ways[sum - c]) % MOD;
            }
        }
    }   

    cout << ways[x] << "\n";
}
