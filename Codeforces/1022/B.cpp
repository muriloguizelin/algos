/**
 * author: Murilo Guizelin
 * date: 2025-05-01
 * hour: 10:56:29
 * Link: https://codeforces.com/contest/2108/problem/B
 */

 #include <bits/stdc++.h>

 using namespace std;

 #define ll long long
 
 int main(){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
 
     int testes;
     cin >> testes;
     while (testes--){
         ll n, x; cin >> n >> x;
         if (n == 1){
             cout << (x == 0 ? -1 : x) << "\n";
             continue;
         }
        int m = __builtin_popcountll(x);
         if (m >= n){
             cout << x << "\n";
             continue;
         }
         ll L = n - m;
         ll pares = (L + 1) / 2;
 
         ll custo = 0;
         for (int j = 0; j <= 31 && pares > 0; j++){
             int base = (x >> j) & 1;
             ll emax = (n - base) / 2;
             if (emax <= 0) continue;
             ll use = min(pares, emax);
             custo += use * (2LL << j);
             pares -= use;
         }
         if (pares > 0) {
             cout << -1 << "\n";
         } else {
             cout << (x + custo) << "\n";
         }
     }
     return 0;
 }
 