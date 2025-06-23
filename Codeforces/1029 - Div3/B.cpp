#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        if(n == 3){
            cout << 2 << " " << 3 << " " << 1 << "\n";
            
        }
        else{
        vector<int> ans;
        ans.push_back(2);
        ans.push_back(3);
        ans.push_back(n);
        for (int x = 4; x < n; x++) ans.push_back(x);
        ans.push_back(1);
        for (int i = 0; i < n; i++){
            cout << ans[i];
            if (i < n - 1)
                cout << " ";
        }
        cout << "\n";
    }
    }
    return 0;
}