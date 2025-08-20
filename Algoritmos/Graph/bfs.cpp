#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;

void bfs(vector<vector<int>>& grafo, int u, vector<int>& distancia) {
    distancia[u] = 0;
    queue<int> q;
    q.push(u);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int i = 0; i < grafo[u].size(); i++) {
            int v = grafo[u][i];
            if (distancia[v] == INF) {
                distancia[v] = distancia[u] + 1;
                q.push(v);
            }
        }
    }
}


int main() {
    int n; cin >> n;

    vector<vector<int>> grafo(n);
    vector<int> distancia(n, INF);

    int origem; cin >> origem;

    bfs(grafo, origem, distancia);

    return 0;
}