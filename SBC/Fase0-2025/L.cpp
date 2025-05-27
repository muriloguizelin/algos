#include <bits/stdc++.h>

using namespace std;
/*
1 byte = 3 qubits
2 bytes = 4 qubits
4 bytes = 5 qubits
m = quantidade de mega bytes, que é 10⁶, em vez
*/
int main(){

    long long m; cin >> m;
    long long byte = m * 1000000;
    long long bits = byte * 8;
    long long qubit = 0;
    while (bits > 0){
        bits = bits / 2;
        qubit++;
    }
    cout << qubit;
}

int main() {
    long long m;
    cin >> m;
    long long bits = m * 8000000LL; // 1 MB = 8 milhões de bits
    int qubit = ceil(log2(bits)); // quantas vezes 2 precisa ser elevado para dar esse valor
    cout << qubit;
}