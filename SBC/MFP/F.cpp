#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin>>n;
    while(n--){
        string s; cin >> s;
        bool ans = true;
        if(s.size() < 10) ans = false;
        bool hasLetter = false, hasDigit = false;
        bool letterPhase = false;
        
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                if(letterPhase) {
                ans = false;
                break;
            }
            hasDigit = true;
            if(i > 0 && isdigit(s[i-1]) && s[i] < s[i-1]){
                ans = false;
                break;
            }
            }
            else if(isalpha(s[i])){
            hasLetter = true;
            letterPhase = true;
            if(i > 0 && isalpha(s[i-1]) && s[i] < s[i-1]){
                ans = false;
                break;
            }
            }
            else {
            ans = false;
            break;
            }
        }
        
        if(!hasLetter || !hasDigit) ans = false;
        
        cout << (ans ? "YES" : "NO") << "\n";
        }
    return 0;
}