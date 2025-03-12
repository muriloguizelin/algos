/**
 * author: Murilo Guizelin
 * date: 2025-03-06
 * hour: 20:19:07
 * Link: https://codeforces.com/problemset/problem/339/A
 */

 #include <bits/stdc++.h>

 using namespace std;
 
 int main() {
   string s;
   cin >> s;
   vector<int> v;
 
   for (char c : s) {
     if (isdigit(c)) {
       v.push_back(c - '0');
       //If c is a digit, this line converts the character to its corresponding integer value and adds it to the vector v. The expression c - '0' works because the characters '0' to '9' 
       // have consecutive ASCII values. Subtracting the ASCII value of '0' from the ASCII value of c gives the integer value of the digit.
     }
   }
 
   sort(v.begin(), v.end());
 
   for (size_t i = 0; i < v.size(); ++i) {
     if (i > 0) {
       cout << "+";
     }
     cout << v[i];
   }
 
   return 0;
 }
 