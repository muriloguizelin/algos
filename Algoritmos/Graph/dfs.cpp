#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>>& grafo, vector<bool>& visitados) {
    visitados[u] = true;

    for (int i = 0; i < grafo[u].size(); i++) {
        int v = grafo[u][i];
        if (!visitados[v]) {
            dfs(v, grafo, visitados);
        }
    }
}
