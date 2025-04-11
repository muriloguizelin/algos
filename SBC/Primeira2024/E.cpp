#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<vector<int>> ma(n, vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> ma[i][j];
        }
    }
    int p0, p1, p2, p3, tf = n-1;
    p0 = ma[0][0];
    p1 = ma[0][tf];
    p2 = ma[tf][tf];
    p3 = ma[tf][0];
    if(min({p0, p1, p2, p3}) == p0) cout << 0;
    if(min({p0, p1, p2, p3}) == p1) cout << 1;
    if(min({p0, p1, p2, p3}) == p2) cout << 2;
    if(min({p0, p1, p2, p3}) == p3) cout << 3;

}