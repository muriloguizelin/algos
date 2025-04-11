#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "S";
    for(int i=0;i<8;i++){
        int n; cin >> n;
        if(n != 1 && n != 0){
            s = "F";
        }
    }
    cout << s;
}