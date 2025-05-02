#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    long long n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long maxSum = INT_MIN, currentSum = 0;
    for (int i = 0; i < n; i++) {
        currentSum = max(v[i], currentSum + v[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum << "\n";
    return 0;
}
