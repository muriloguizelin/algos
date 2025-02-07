#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pair<pair<int, int>, int>> impressions(n);
        
        // Read impressions
        for (int i = 0; i < n; ++i) {
            cin >> impressions[i].first.first >> impressions[i].first.second;
            impressions[i].second = i;
        }

        // Sort impressions based on their lower bound (li)
        sort(impressions.begin(), impressions.end());

        vector<int> result(n, 0);
        vector<bool> used_values(2 * n + 1, false); // To keep track of assigned values
        int last_assigned = 0;
        
        // Try to assign values to each impression
        for (int i = 0; i < n; ++i) {
            int li = impressions[i].first.first;
            int ri = impressions[i].first.second;
            int idx = impressions[i].second;

            // Find the first unassigned value in the range [li, ri]
            bool assigned = false;
            for (int v = li; v <= ri; ++v) {
                if (!used_values[v]) {
                    result[idx] = 1; // This impression can be unique
                    used_values[v] = true; // Mark this value as used
                    assigned = true;
                    break;
                }
            }

            if (!assigned) {
                result[idx] = 0; // This impression cannot be unique
            }
        }

        // Output the result for this test case
        for (int i = 0; i < n; ++i) {
            cout << result[i];
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
