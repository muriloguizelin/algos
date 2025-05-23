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
    string s; cin >> s;
    string sub = s.substr(3,5);
    if(sub == "SP") cout << "S";
    else if(sub == "S?" || sub == "?P") cout << "T";
    else cout << "N";


}