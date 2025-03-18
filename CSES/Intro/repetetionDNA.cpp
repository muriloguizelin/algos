/**
 * author: Murilo Guizelin
 * date: 2025-03-18
 * hour: 15:22:07
 * Link: https://cses.fi/problemset/task/1069/
 */
/*(

Explicação: Receba uma string s (ATTCGGGA) e deve verificar qual a maior repetição.
O for vai iterar pela sequencia toda e vai verificar a contagem atual e a anterior.

)*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string dna;
    cin >> dna;
    int count = 1, maxi = 1;
    for (int i = 1; i < dna.size(); i++) {
        if (dna[i] == dna[i - 1]) {
            count++;
            maxi = max(maxi, count);
        } else {
            count = 1;
        }
    }
    cout << maxi;
}