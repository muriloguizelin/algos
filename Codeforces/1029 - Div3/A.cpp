#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(NULL);
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        string res = "YES";
        bool dim = false;
        for(int i=0;i<n;i++){
            int a; cin >> a;
            if(a == 1 && x < 1) res = "NO";
            if(dim == true && x > 0) x--;
            if(a == 1 && dim == false){
                dim = true;
                x--;
            }
        }
        cout << res << "\n";
    }
}