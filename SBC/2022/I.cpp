#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n = 8;
    char res = 'S';
    while(n--){
        int t; cin >> t;
        if(t == 9){
            res = 'F';
        }
    }
    cout << res;
    return 0;
}