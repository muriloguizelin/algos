#include <bits/stdc++.h>

using namespace std;

int main(){
    string haystack, needle;
    int res = -1;
    cin >> haystack >> needle;
    for(int i=0;i <= haystack.length() - needle.length(); i++){
        if(haystack.substr(i, needle.length()) == needle)
            res = i;
    }
    cout << res << "\n";
}