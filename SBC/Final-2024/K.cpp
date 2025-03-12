#include <bits/stdc++.h>

using namespace std;

int minOperationsK2(const string &S, string &result) {
    int n = S.size();
    string alt1, alt2;
    
    for (int i = 0; i < n; i++) {
        alt1 += (i % 2 == 0) ? '0' : '1';
        alt2 += (i % 2 == 0) ? '1' : '0';
    }
    
    int cost1 = 0, cost2 = 0;
    for (int i = 0; i < n; i++) {
        if (S[i] != alt1[i]) cost1++;
        if (S[i] != alt2[i]) cost2++;
    }
    
    if (cost1 < cost2) {
        result = alt1;
        return cost1;
    } else {
        result = alt2;
        return cost2;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int K;
    string S;
    cin >> K >> S;

    int n = S.size();
    
    if (K == 2) {
        string result;
        int operations = minOperationsK2(S, result);
        cout << operations << " " << result << endl;
        return 0;
    }

    int operations = 0;
    for (int i = 0; i < n;) {
        int j = i;
        while (j < n && S[j] == S[i]) j++;

        int length = j - i;

        if (length >= K) {
            int flips = length / K;
            operations += flips;

            for (int l = i + K - 1, count = 0; count < flips; count++, l += K) {
                if (length % K == 0 && count == flips - 1) {
                    l--; // Adjust for divisibility case
                }
                S[l] = (S[l] == '0') ? '1' : '0';
            }
        }

        i = j;
    }

    cout << operations << " " << S << endl;
    return 0;
}
