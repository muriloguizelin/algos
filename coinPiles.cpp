#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if((a+b)%3 == 0 && 2*a >= b && 2*b >= a){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}