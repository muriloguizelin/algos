/**
 * author: Murilo Guizelin
 * date: 2025-03-06
 * hour: 14:25:07
 * Link: https://codeforces.com/problemset/problem/112/A
 */

 #include <bits/stdc++.h>

 using namespace std;
 
 int main() {
   string s; cin >> s;
   string s1; cin >> s1;
   for(int i=0;i<s.size()+1;i++){
     if(tolower(s[i]) > tolower(s1[i])){
         cout << "1" << '\n';
         return 0;
     }
     if(tolower(s[i]) < tolower(s1[i])){
         cout << "-1" << '\n';
         return 0;
     }
 
   }
   cout << "0";
 }
 