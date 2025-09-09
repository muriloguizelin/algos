#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    int i = 1;
    while(n--){
        int a, b, c; cin >> a >> b >> c;
        int menor = min({a,b,c});
        int maior = max({a,b,c});
        cout << "Case " << i << ": " << (a+b+c)-(menor+maior) << '\n';

    }   
    return 0;
}