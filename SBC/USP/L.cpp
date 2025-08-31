#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<int> selos(n);
    for(int i=0;i<n;i++) cin >> selos[i];
    map<int, int> freq;
    for(int i = 0; i < n; i++) {
        freq[selos[i]]++;
    }

    int min_rounds = freq.size();
    int count_m = 0;

    for(int m = 1; m <= 1000000000; m++) {
        map<int, int> mod_freq;
        for(int i = 0; i < n; i++) {
            mod_freq[selos[i] % m]++;
        }
        
        int rounds = mod_freq.size();
        if(rounds == min_rounds) {
            count_m++;
        } else if(rounds < min_rounds) {
            min_rounds = rounds;
            count_m = 1;
        }
    }

    cout << min_rounds << " " << count_m << endl;
    return 0;
}