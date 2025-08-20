#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, ans = 0; cin >> n;
    string s; cin >> s;
    
    int as = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a'){
            as++;
        } else {
            if(as >= 2){
                ans += as;
            }
            as = 0;
        }
    }
    if(as >= 2) ans += as;
    
    cout << ans << endl;
    return 0;
}