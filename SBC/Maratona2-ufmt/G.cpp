#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    int i = 1;
    while(n--){
        int t, t1, t2; cin >> t >> t1 >> t2;
        if(t + t1 < t2 || t2 + t1 < t || t + t2 < t1) cout << "Case " << i << ": Invalid" << '\n';
        else if(t == t1 == t2) cout << "Case " << i << ": Equilateral" << '\n';
        else if(t == t1 || t1 == t2 || t == t2) cout << "Case " << i << ": Isoceles" << '\n';
        else cout << "Case " << i << ": Scalene" << '\n';
        i++;
    }   
    return 0;
}