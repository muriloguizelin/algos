#include <bits/stdc++.h>

#define endl "\n"

using namespace std;
//a dias, b umbrella at home, c umbrella at work
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a, b, c;
    cin >> a >> b >> c;
    for(int i=0;i<a;i++){
        string s0, s1;
        cin >> s0 >> s1;
        if(s0 == "Y" || c == 0){
            b--;
            c++;
            cout << "Y ";
        }
        else cout << "N ";
        if(s1 == "Y" || b == 0){
            c--;
            b++;
            cout << "Y";
        }
        else cout << "N";
        cout << endl;
    }
}