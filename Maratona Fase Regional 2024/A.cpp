#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, x, t;
    cin >> n >> k;
    k -= n-1;
    x = k/n;
    cout << x << "\n";
    return 0;
}