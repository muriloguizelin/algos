#include <bits/stdc++.h>
using namespace std;

struct Porta {
    int tipo;
    int qc1, qc2, qt;
};

int main() {

    int num_qubits;
    int num_portas;
    cin >> num_qubits >> num_portas;

    int dimensao = 1 << num_qubits;

    vector<Porta> lista_portas(num_portas);
    for (int m = 0; m < num_portas; ++m) {
        cin >> lista_portas[m].tipo;
        if (lista_portas[m].tipo == 1) {
            int q_controle, q_alvo_cnot;
            cin >> q_controle >> q_alvo_cnot;
            lista_portas[m].qc1 = q_controle;
            lista_portas[m].qc2 = q_controle;
            lista_portas[m].qt = q_alvo_cnot;
        } else {
            cin >> lista_portas[m].qc1 >> lista_portas[m].qc2 >> lista_portas[m].qt;
        }
    }

    vector<int> mapeamento_final(dimensao);
    for (int i = 0; i < dimensao; ++i) {
        mapeamento_final[i] = i;
    }

    for (int m_idx = num_portas - 1; m_idx >= 0; --m_idx) {
        Porta p_atual = lista_portas[m_idx];

        int q_controle1 = p_atual.qc1;
        int q_controle2 = p_atual.qc2;
        int q_alvo = p_atual.qt;

        for (int i = 0; i < dimensao; ++i) {
            int estado_atual = mapeamento_final[i];

            bool controle1_ativo = ((estado_atual >> q_controle1) & 1);
            bool controle2_ativo = ((estado_atual >> q_controle2) & 1);

            int estado_apos_porta_atual;

            if (controle1_ativo && controle2_ativo) {
                estado_apos_porta_atual = estado_atual ^ (1 << q_alvo);
            } else {
                estado_apos_porta_atual = estado_atual;
            }
            mapeamento_final[i] = estado_apos_porta_atual;
        }
    }

    for (int linha = 0; linha < dimensao; ++linha) {
        for (int coluna = 0; coluna < dimensao; ++coluna) {
            if (mapeamento_final[coluna] == linha) {
                cout << '1';
            } else {
                cout << '0';
            }
        }
        cout << '\n';
    }

    return 0;
}