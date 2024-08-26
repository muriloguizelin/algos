#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> result(N, 0);
    multiset<int> capacities;

    for (int i = 0; i < N; ++i) {
        int current_capacity = A[i] / P;
        // Count how many elements in the multiset are greater than current_capacity
        result[i] = distance(capacities.upper_bound(current_capacity), capacities.end());
        // Insert the current capacity into the multiset
        capacities.insert(current_capacity);
    }

    for (int i = 0; i < N; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}