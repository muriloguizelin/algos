/**
 * author: Murilo Guizelin
 * date: 2025-05-23
 * hour: 15:30:27
 * Link: https://codeforces.com/gym/105904
 */



#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(NULL);
    int W, A, B, C; cin >> W >> A >> B >> C;
    if(A+B+C <= W) cout << "S";
    else cout << "N";
}