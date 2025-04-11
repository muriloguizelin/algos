/**
 * author: Murilo Guizelin
 * date: 2025-03-18
 * hour: 15:25:17
 * Link: https://cses.fi/problemset/task/1070
 */

/*
Os numeros a esquerda e a direita devem ter a dif != 1
Entao printa todos os pares e depois todos os impares.
*/
#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << '/n';
    } else if (n < 4) {
        cout << "NO SOLUTION" << '/n';
    } else {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }
    return 0;
}