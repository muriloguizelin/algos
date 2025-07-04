#include <bits/stdc++.h>

using namespace std;

    map<int, long long> memo;

    int fibRecursivo(int n) {
        if (n <= 1) return n;
        return fibRecursivo(n - 1) + fibRecursivo(n - 2);
    }

    int fibIterativo(int n) {
        if (n <= 1) return n;
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }

    long long fibMemo(int n) {
        if (n <= 1) return n;
        if (memo.find(n) != memo.end()) return memo[n];
        memo[n] = fibMemo(n - 1) + fibMemo(n - 2);
        return memo[n];
    }

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cout << "Digite o valor de n: ";
    cin >> n;

    cout << "Fibonacci recursivo: " << fibRecursivo(n) << endl;
    cout << "Fibonacci iterativo: " << fibIterativo(n) << endl;
    cout << "Fibonacci com memoização: " << fibMemo(n) << endl;
    return 0;
}