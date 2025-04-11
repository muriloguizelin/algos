#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    
    vector<int> necessidade(N);
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        necessidade[i] = 100 - x;
    }
    
    sort(necessidade.begin(), necessidade.end());
    
    int satisfeitos = 0;
    for (int i = 0; i < N; i++) {
        if (L >= necessidade[i]) {
            L -= necessidade[i];
            satisfeitos++;
        } else {
            break;
        }
    }
    
    cout << satisfeitos << endl;
    
    return 0;
}
