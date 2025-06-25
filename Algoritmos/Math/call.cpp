#include <bits/stdc++.h>
using namespace std;

// Função CDF da Normal padrão usando erro complementar
double normal_cdf(double x) {
    return 0.5 * erfc(-x / sqrt(2));
}

// Black-Scholes para opção CALL
double black_scholes_call(double S, double K, double T, double r, double sigma) {
    double d1 = (log(S/K) + (r + 0.5 * sigma*sigma)*T) / (sigma * sqrt(T));
    double d2 = d1 - sigma * sqrt(T);
    return S * normal_cdf(d1) - K * exp(-r * T) * normal_cdf(d2);
}

// Função lucro/prejuízo no vencimento para dado preço final da ação
double payoff_call(double preco_final, double K, double preco_opcao) {
    return max(preco_final - K, 0.0) - preco_opcao;
}

int main() {
    double S, K, T, r, sigma;

    cout << "Preço atual da ação (S): ";
    cin >> S;
    cout << "Strike da opção (K): ";
    cin >> K;
    cout << "Tempo até vencimento (em anos, ex: 0.25 = 3 meses): ";
    cin >> T;
    cout << "Taxa de juros anual (ex: 0.11 para 11%): ";
    cin >> r;
    cout << "Volatilidade anual (ex: 0.25 para 25%): ";
    cin >> sigma;

    double preco_opcao = black_scholes_call(S, K, T, r, sigma);

    cout << fixed << setprecision(2);
    cout << "\nPreço teórico da opção CALL: R$ " << preco_opcao << "\n\n";

    cout << "Preço final da ação | Lucro/Prejuízo da opção\n";
    cout << "----------------------------------------------\n";

    // Varia o preço final da ação de 60% do strike até 150%
    for (double preco_final = 0.6 * K; preco_final <= 1.5 * K; preco_final += 0.5) {
        double lucro = payoff_call(preco_final, K, preco_opcao);
        cout << setw(18) << preco_final << " | " << setw(22) << lucro << "\n";
    }

    return 0;
}
