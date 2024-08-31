#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    set<int> set;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        set.insert(a);
    }

    cout << set.size() << endl;

    return 0;
}