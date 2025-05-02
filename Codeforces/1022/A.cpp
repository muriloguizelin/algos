/**
 * author: Murilo Guizelin
 * date: 2025-05-01
 * hour: 10:56:29
 * Link: https://codeforces.com/contest/2108/problem/A
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int perm = x/2;
        cout << perm*(x-perm)+1 << "\n";
    }
}