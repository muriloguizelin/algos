#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for(int i = 0; i < n; ++i) cin >> x[i];

        int caminho = abs(s - x[0]) + (x[n-1] - x[0]);
        int caminho1 = abs(x[n-1] - s) + (x[n-1] - x[0]);

        cout << min(caminho, caminho1) << "\n";
    }
    return 0;
}