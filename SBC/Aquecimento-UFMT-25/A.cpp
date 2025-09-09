#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    long long x, y;
    
    while(1){
        int n = 0;
        cin >> x >> y;
        int carry = 0;
        if(x == 0 && y == 0) break;
        while(x > 0 || y > 0){
            int x1 = x % 10;
            int y1 = y % 10;
            int r = x1 + y1 + carry;
            if(r >= 10){
                n++;
                carry = 1;
            }
            else carry = 0;
            x /= 10;
            y /= 10;
        }
        if(n == 1) cout << n << " carry operation." << '\n';
        else if(n > 1)  cout << n << " carry operations." << '\n';
        else cout << "No carry operation." << '\n';

    }
    return 0;
}
