#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, target. i0 = 0, i1; cin >> n >> target;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    cout << {i, j};
                }
            }
        }

}