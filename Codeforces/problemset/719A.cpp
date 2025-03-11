/**
 * author: Murilo Guizelin
 * date: 2025-03-06
 * hour: 20:28:59
 * Link: https://codeforces.com/problemset/problem/791/A
 */

 #include <bits/stdc++.h>

 using namespace std;
 
 int main() {
   int a, b, i=0; cin >> a >> b;
   while(a <= b){
     a*=3;
     b*=2;
     i++;
   }
   cout << i;
 }
 