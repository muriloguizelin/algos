#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    if(n / 1000 > 0) cout << "More than 3 digits";
    else if(n / 100 > 0) cout << "3";   
    else if(n / 10 > 0) cout << "2";   
    else cout << "1";   
    return 0;
}