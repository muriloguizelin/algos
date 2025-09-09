#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    int x; cin >> x;
    int h1=0, h2=0, h3=0;
    vector<int> estudantes(x);
    for(int i=0;i<x;i++){
        cin >> estudantes[i];
        int t = estudantes[i];
        if(t == 1) h1++;
        else if(t == 2) h2++;
        else h3++;
    }
    int r = min(h1,h2);
    r = min(r,h3);
    cout << r << '\n';
    while(r--){
        int p1 = -1, p2 = -1, x3 = -1;
        for(int i=0;i<estudantes.size();i++){
            int e = estudantes[i];
            if(p1 == -1 && e == 1){
                p1 = i;
                estudantes[i] = -1;
            }
            if(p2 == -1 && e == 2){
                p2 = i;
                estudantes[i] = -1;
            }
            if(x3 == -1 && e == 3){
                x3 = i;
                estudantes[i] = -1;
            }
        }
        cout << p1+1 << " " << p2+1 << " " << x3+1 << '\n';
    }

}
