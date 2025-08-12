#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s; cin >> s;
    string s2 = s;
    reverse(s.begin(), s.end());
    cout << s2 << s;
    return 0;
}