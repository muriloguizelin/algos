#include <bits/stdc++.h>
using namespace std;
/*unbounded knapsack, problema da mochila sem pesos, apenas quantia
Resumindo ele vai mapear qual o minimo de moedas que eu consigo formar o valor x, entao de 1 a x vai estar mapeado todas as quantias.
Moedas = 1, 5, 7
dp[1] = 1   dp[2] = 2   dp[3] = 3
dp[4] = 4  dp[5] = 1   dp[6] = 2
dp[7] = 1   dp[8] = 2   dp[9] = 3   
dp[10] = 2   dp[11] = 3
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> moedas(n);
    for (int &c : moedas) cin >> c;

    vector<int> dp(x + 1, x + 1);
    dp[0] = 0;

    for (int s = 1; s <= x; s++) {
        for (int c : moedas) {
            if (c <= s) {
                dp[s] = min(dp[s], dp[s - c] + 1);
            }
        }
    }

    cout << (dp[x] > x ? -1 : dp[x]) << "\n";

    return 0;
}
