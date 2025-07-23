#include <iostream>
#include <vector>
#include <string>
using namespace std;

int fatorial(int n) {
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int somaVetor(const vector<int>& v, int i = 0) {
    if (i == v.size()) return 0;
    return v[i] + somaVetor(v, i + 1);
}

int contarPositivos(const vector<int>& v, int i = 0) {
    if (i == v.size()) return 0;
    return (v[i] > 0) + contarPositivos(v, i + 1);
}

bool ehPalindromo(const string& s, int esquerda = 0, int direita = -1) {
    if (direita == -1) direita = s.size() - 1;
    if (esquerda >= direita) return true;
    if (s[esquerda] != s[direita]) return false;
    return ehPalindromo(s, esquerda + 1, direita - 1);
}

int maiorValor(const vector<int>& v, int i = 0) {
    if (i == v.size() - 1) return v[i];
    return max(v[i], maiorValor(v, i + 1));
}

int somaDigitos(int n) {
    if (n == 0) return 0;
    return (n % 10) + somaDigitos(n / 10);
}

string inverterString(const string& s, int i = 0) {
    if (i == s.size()) return "";
    return inverterString(s, i + 1) + s[i];
}

int potencia(int a, int b) {
    if (b == 0) return 1;
    return a * potencia(a, b - 1);
}

int contarPares(const vector<int>& v, int i = 0) {
    if (i == v.size()) return 0;
    return (v[i] % 2 == 0) + contarPares(v, i + 1);
}

int primeiraOcorrencia(const vector<int>& v, int x, int i = 0) {
    if (i == v.size()) return -1;
    if (v[i] == x) return i;
    return primeiraOcorrencia(v, x, i + 1);
}

int contarMaioresQue(const vector<int>& v, int x, int i = 0) {
    if (i == v.size()) return 0;
    return (v[i] > x) + contarMaioresQue(v, x, i + 1);
}

int main() {
    vector<int> v = {1, -5, 3, 8, 0, -2, 9};
    string s = "arara";

    cout << "1. Fatorial(5): " << fatorial(5) << endl;
    cout << "2. Fibonacci(6): " << fibonacci(6) << endl;
    cout << "3. Soma vetor: " << somaVetor(v) << endl;
    cout << "4. Positivos: " << contarPositivos(v) << endl;
    cout << "5. Palindromo(\"" << s << "\"): " << (ehPalindromo(s) ? "Sim" : "Não") << endl;
    cout << "6. Maior valor: " << maiorValor(v) << endl;
    cout << "7. Soma dígitos(1234): " << somaDigitos(1234) << endl;
    cout << "8. Inverter(\"hello\"): " << inverterString("hello") << endl;
    cout << "9. Potencia(2, 5): " << potencia(2, 5) << endl;
    cout << "10. Pares no vetor: " << contarPares(v) << endl;
    cout << "11. Primeira ocorrencia de 8: " << primeiraOcorrencia(v, 8) << endl;
    cout << "12. Maiores que 2: " << contarMaioresQue(v, 2) << endl;

    return 0;
}
