#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    while((cin >> n) && n != 0){
        int G=0;
        for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
        {
         G+=gcd(i,j);
        }
        cout << G;
    }
    return 0;
}