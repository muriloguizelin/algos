/**
 * author: Murilo Guizelin
 * date: 2025-02-18
 * hour: 08:10:56
 * Link: https://cses.fi/problemset/task/1068
 */

/*
Recebe um valor N e deve iterar ele ate que seja 1, 
caso ele seja impar multiplique por 3 e some 1 e caso seja par divida por dois.
*/
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << n << endl;

    return 0;
}
