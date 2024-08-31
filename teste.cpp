#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 1;
    set<string> set;
    string s;
    cin >> s;
    while(n != 0){
        cout << "Olá " + s + " , digite o nome do seu pai, em caso de você ser o último da linguagem digite 1" << endl;
        if(s == "1") n = 0;
        set.insert(s);
        cin >> s;
        
    }
    for(int i=0;i++;i>set.max_size()){
        auto it = set.find(to_string(i));
        if (it != set.end()) {
            cout << "O nome do seu familiar desejado é? " << *it << " ?";
        }
    }
}