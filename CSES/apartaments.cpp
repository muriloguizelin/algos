#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k, count = 0;
    cin >> n >> m >> k;
    vector<int> app(n), apart(m);
    for (int i = 0; i < n; i++) cin >> app[i];
    for (int j = 0; j < m; j++) cin >> apart[j];
    sort(app.begin(), app.end());
    sort(apart.begin(), apart.end());
    int i = 0, j = 0;
    while (i < n && j < m){
        if (abs(app[i] - apart[j]) <= k){
            count++;
            i++;
            j++;
        }
        else if (app[i] < apart[j]) i++;
        else j++;
    }
    cout << count << '\n';
    return 0;
}