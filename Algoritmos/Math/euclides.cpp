#include <bits/stdc++.h>

using namespace std;

// O Algoritmo de Euclides para encontrar o Máximo Divisor Comum (MDC) de dois
// números 'a' e 'b' baseia-se no princípio de que o MDC(a, b) é o mesmo que
// MDC(b, a % b). O processo se repete até que o segundo número se torne 0,

long long gcd(long long a, long long b) {
    // Caso base da recursão: quando b é 0, a é o mdc.
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    long long a = 54;
    long long b = 24;

    long long result = gcd(a, b);

    cout << "O Máximo Divisor Comum (MDC) de " << a << " e " << b << " é: " << result << endl;
    // Saída esperada: 6

    return 0;
}