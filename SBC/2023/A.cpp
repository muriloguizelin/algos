#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, h, res = 0; cin >> n >> h;
    while(n--){
        int x; cin >> x;
        if(x <= h) res++;
    }
    cout << res;
    return 0;
}