#include <bits/stdc++.h>

using namespace std;
//https://codeforces.com/group/8JufKtWW7p/contest/565415/problem/A
// basicamente ele dá uma string S + o set de S, ou seja, string = s + set<s>, voce tem que devolver só o s, pra isso faça o set desse s e subtraia.
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n; string s;
    cin >> s;
    set<char> unique (s.begin(), s.end());
    n = s.size() - unique.size();
    cout << n << "\n";
}