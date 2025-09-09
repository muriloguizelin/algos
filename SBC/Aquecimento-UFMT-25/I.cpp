#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    int x; cin >> x;
    unordered_map<string, int> tabela;
    while(x--){
        string s; cin >> s;
        if(!tabela.count(s)){
                tabela.insert({s,1});
                cout << "OK" << '\n';
        }
        else{
            cout << s << tabela[s] << '\n';
            tabela[s]++;
        }
    }
    return 0;
}
