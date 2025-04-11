/**
 * author: Murilo Guizelin
 * date: 2025-03-18
 * hour: 15:27:06
 * Link: https://cses.fi/problemset/task/1071
 */


#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int T;
    ll X, Y;

    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> X >> Y;
        ll ans = max(X, Y)-1;
        if(ans&1){
            if(X < Y)   cout <<  ans*ans + X << endl; 
            else        cout << ans*ans+2*ans-Y+2 << endl;
        } else {
            if(X < Y)   cout << ans*ans+2*ans-X+2 << endl;
            else        cout << ans*ans + Y << endl;
        }
    }
}
