#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> apple(n);
    for(int i=0;i<n;i++) cin >> apple[i];
    sort(apple.begin(), apple.end());
    
    long long total_sum = accumulate(apple.begin(), apple.end(), 0LL);
    long long min_diff = LLONG_MAX;
    
    for (int mask = 0; mask < (1 << n); mask++) {
        long long group_sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                group_sum += apple[i];
            }
        }
        long long other_group_sum = total_sum - group_sum;
        min_diff = min(min_diff, abs(group_sum - other_group_sum));
    }
    
    cout << min_diff << endl;
    return 0;
}