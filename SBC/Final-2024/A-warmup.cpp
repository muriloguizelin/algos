#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int total_elements = 3 * n;

    vector<int> v(total_elements);
    for (int i = 0; i < total_elements; i++) {
        cin >> v[i];
    }

    unordered_map<int, int> freq;
    for (int num : v) {
        freq[num]++;
    }

    bool all_multiple_of_3 = true;
    for (auto& [num, count] : freq) {
        if (count % 3 != 0) {
            all_multiple_of_3 = false;
            break;
        }
    }

    cout << (all_multiple_of_3 ? 'N' : 'Y') << '\n';

    return 0;
}