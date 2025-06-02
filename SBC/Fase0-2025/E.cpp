#include <bits/stdc++.h>
using namespace std;

long long obter_menor_fator_primo(long long n) {
    if (n % 2 == 0) return 2;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return i;
    }
    return n;
}
/* 
Verificando passo a passo dava TLE, por que ele rodava o gcd muito mais vezes, já assim, ele vai rodando até que encontra um gap para pular tudo de uma vez
    Y = 4 <=> K = 3 -> gcd = 1, x_linha = 1, y_linha = 4, p = 2, passos = 2 - (1 % 2) = 1. X = 2, K = 2.
    gcd = 2, x_Linha = 1, y_linha = 2, p = 2, passos = 2 - (1 % 2) = 1, X = 4, K = 1.
    gcd = 4, g==Y, X += 1 * 4 = 8.
    ans = Posição 8.
*/
int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long Y, K;
    cin >> Y >> K;
    long long X = 1;
    while (K > 0) {
        long long g = gcd(X, Y);

        if (g == Y) {
            X += K * Y;
            break;
        } else {
            long long X_linha = X / g;
            long long Y_linha = Y / g;
            long long p = obter_menor_fator_primo(Y_linha);
            long long passos = p - (X_linha % p);
            
            if (K <= passos) {
                X += K * g;
                K = 0;
            } else {    
                X += passos * g;
                K -= passos;
            }
        }
    }

    cout << X << '\n';
}