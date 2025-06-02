#include <bits/stdc++.h>

using namespace std;
/*
Se a caixa ta fechada nao da pra saber o estado do gato, já se ela ta aberta o estado dito é o que ele está.
*/
int main(){
    cin.tie(0);
    ios::sync_with_stdio(NULL);
    int C, G; cin >> C >> G;
    if(C == 1) cout << "vivo e morto";
    else if(G == 0) cout << "morto";
    else cout << "vivo";
}