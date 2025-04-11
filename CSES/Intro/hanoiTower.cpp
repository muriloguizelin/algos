#include <bits/stdc++.h>

using namespace std;

map<tuple<int, int, int>, vector<pair<int, int>>> memo;

vector<pair<int, int>> solveHanoiMemo(int n, int from, int to, int aux) {
    if (n == 0) return {};

    auto key = make_tuple(n, from, to);
    if (memo.count(key)) return memo[key];

    vector<pair<int, int>> moves;
    auto firstPart = solveHanoiMemo(n - 1, from, aux, to);
    moves.insert(moves.end(), firstPart.begin(), firstPart.end());
    moves.emplace_back(from, to);
    auto secondPart = solveHanoiMemo(n - 1, aux, to, from);
    moves.insert(moves.end(), secondPart.begin(), secondPart.end());

    return memo[key] = moves;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; 
    cin >> n;
    int res = pow(2, n) - 1;
    cout << res << '\n';
    auto moves = solveHanoiMemo(n, 1, 3, 2);
    for (auto [from, to] : moves) {
        cout << from << " " << to << '\n';
    }
    return 0;
}
