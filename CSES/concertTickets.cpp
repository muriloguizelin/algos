#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    for (int i = 0; i < n; i++) {
        int price; cin >> price;
        tickets.insert(price);
    }
    for (int i = 0; i < m; i++) {
        int maxPrice;
        cin >> maxPrice;
        auto it = tickets.upper_bound(maxPrice); //etorna um iterador para o primeiro elemento estritamente maior que x
        if (it != tickets.begin()) {
            --it;
            cout << *it << "\n";
            tickets.erase(it);
        } else cout << "-1\n";
    }
    
    return 0;
}
