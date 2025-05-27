#include <iostream>

using namespace std;

int main(){

    long long m;
    cin >> m;

    long long byte = m * 1000000;

    long long bits = byte * 8;

    long long qubit = 0;

    while (bits > 0){
        bits = bits / 2;
        qubit++;
    }
    cout << qubit;
}