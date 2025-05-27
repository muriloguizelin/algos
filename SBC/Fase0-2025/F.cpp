#include <bits/stdc++.h>

using namespace std;
/*
nao passou
*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tamanho; 
    cin >> tamanho;

    vector<int> valores_a(tamanho);
    for (int i = 0; i < tamanho; ++i) {
        cin >> valores_a[i];
    }

    unordered_map<int, vector<pair<int, int>>> somas_pares;

    for (int i = 0; i < tamanho; ++i) {
        for (int j = i + 1; j < tamanho; ++j) {
            somas_pares[valores_a[i] + valores_a[j]].emplace_back(i, j);
        }
    }

    for (auto& entrada : somas_pares) {
        sort(entrada.second.begin(), entrada.second.end());
    }

    int numero_consultas;
    cin >> numero_consultas;

    while (numero_consultas--) {
        int soma_alvo_consulta;
        cin >> soma_alvo_consulta;

        long long contador_quadruplos = 0;

        for (const auto& entrada_par1 : somas_pares) {
            int soma_par1 = entrada_par1.first;
            const auto& pares_ij = entrada_par1.second;

            int soma_par2_necessaria = soma_alvo_consulta - soma_par1;

            auto it_pares_kl = somas_pares.find(soma_par2_necessaria);

            if (it_pares_kl == somas_pares.end()) {
                continue;
            }
            const auto& pares_kl = it_pares_kl->second;

            int ptr_kl = 0;

            for (const auto& par_ij : pares_ij) {
                int indice_j = par_ij.second;
                while (ptr_kl < pares_kl.size() && pares_kl[ptr_kl].first <= indice_j) {
                    ptr_kl++;
                }
                contador_quadruplos += (pares_kl.size() - ptr_kl);
            }
        }
        cout << contador_quadruplos << endl;
    }

}
