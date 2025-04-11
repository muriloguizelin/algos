#/**
 * author: Murilo Guizelin
 * date: 2025-04-01
 * hour: 01:05:37
 * Link: https://leetcode.com/problems/two-sum/description/
 */

#include <bits/stdc++.h>

using namespace std;
/*
Foi usado um hashMap para que ao chegar a soma verificar se existe um valor que resulte no target
hashMap[complement] retorna o index do valor,
*/
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    unordered_map<int, int> hashMap;
    for (int i = 0; i < n; i++) {
        int complement = target - v[i];
        if (hashMap.find(complement) != hashMap.end()) {
            cout << "["<< hashMap[complement] << "," << i << "]" << "\n";
            return 0;
        }
        hashMap[v[i]] = i;
    }

    cout << "No solution found\n";
    return 0;
}