/**
 * author: Murilo Guizelin
 * date: 2025-02-18
 * hour: 08:11:55
 * Link: https://cses.fi/problemset/task/1083
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers(n - 1);
    long long actual_sum = 0;
    
    for (int i = 0; i < n - 1; ++i) {
        cin >> numbers[i];
        actual_sum += numbers[i];
    }
    
    long long expected_sum = (long long)n * (n + 1) / 2;
    cout << expected_sum - actual_sum << endl;

    return 0;
}
