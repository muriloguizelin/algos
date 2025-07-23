#include <bits/stdc++.h>
using namespace std;
/*
Gray code é uma variação do código binário, ele muda 1 bit por vez apenas.
BIN vs Gray
0 = 000 x 000
2 = 010 x 011
3 = 011 x 010
4 = 100 x 110
*/
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;cin >> n;
    // Isso abaixo é genial, pega um bit 0000, se eu deslocar o bit 1 por 2 casas vai virar 0100 que é o mesmo que 2^2 = 4, 
    // se eu deslocar ele por 0 casas vai ficar 0001 que é 2^0 = 1, isso so funciona para base 2
    int pot = 1 << n;
    for (int i = 0; i < pot; i++) {
        int gray = i ^ (i>>1);
        bitset<16> bs(gray);
        string s = bs.to_string();
        cout << bs.to_string().substr(16 - n) << '\n';
    }

    return 0;
}
