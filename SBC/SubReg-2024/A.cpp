/**
 * author: Murilo Guizelin
 * date: 2025-03-08
 * hour: 13:39:48
 * Link: https://maratona.sbc.org.br/primfase24/contest-pf2024/maratona.pdf
 */


#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    k -= n-1;
    cout << k/n << "\n";
    return 0;
}