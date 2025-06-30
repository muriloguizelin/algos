#include <iostream>
using namespace std;

using ll = long long;

// Função para calcular (base^expoente) % modulo de forma eficiente
ll mod_pow(ll base, ll expoente, ll modulo) {
    ll resultado = 1;
    base %= modulo;

    while (expoente > 0) {
        if (expoente & 1)
            resultado = (resultado * base) % modulo;

        base = (base * base) % modulo; 
        expoente >>= 1;
    }

    return resultado;
}

int main() {
    ll a, b, m;
    cout << "Digite a base, o expoente e o modulo: ";
    cin >> a >> b >> m;

    cout << a << "^" << b << " mod " << m << " = " << mod_pow(a, b, m) << "\n";
    return 0;
}
