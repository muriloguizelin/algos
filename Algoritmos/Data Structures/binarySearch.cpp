#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
// Este código implementa um algoritmo de busca binária para encontrar o índice de um valor alvo em um array ordenado.
// Ele assume que o array de entrada está ordenado em ordem não decrescente.
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++) cin >> array[i];

    int a = 0, b = n-1, x, ind;
    cin >> x;

    while (a <= b) {
        int k = (a+b)/2;

        if (array[k] == x) {
            ind = k;
        }
        
        if (array[k] > x) b = k-1;
        else a = k+1;
    }

    cout << ind << "\n";

}
