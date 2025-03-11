/**
 * author: Murilo Guizelin
 * date: 2025-03-06
 * hour: 13:54:53
 * Link: https://codeforces.com/problemset/problem/236/A
 */
#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  set<char> a;
  for(int i=0;i<s.size();i++){
    a.insert(s[i]);
  }
  if(a.size() %2 == 0) cout << "CHAT WITH HER!";
  if(a.size() %2 == 1) cout << "IGNORE HIM!";

}

// optimized
// string s; cin >> s;
// set<char> a;
// sort(a.begin(), a.end());
// cout << (a.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
