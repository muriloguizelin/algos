#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n, k; 
        cin >> n >> k;
        
        vector<int> v(n);
        map<int, int> frequencyMap;
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            frequencyMap[v[i]]++;
        }
        
        vector<int> frequencies;
        for (const auto& entry : frequencyMap) {
            frequencies.push_back(entry.second);
        }
        
        sort(frequencies.begin(), frequencies.end());
        
        int j = 0;
        for (int i = 0; i < frequencies.size(); i++) {
            if (frequencies[i] > k) break;
            j++;
            k -= frequencies[i];
        }
        
        int remainingElements = frequencies.size() - j;
        cout << max(1, remainingElements) << endl;
    }
    
    return 0;
}