#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    unordered_map<int,int> freq;
    int maxLen = 0, left = 0;

    for(int right = 0; right < n; right++) {
        freq[v[right]]++;
        while(freq[v[right]] > 1) {
            freq[v[left]]--;
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }

    cout << maxLen << "\n";
    return 0;
}
