#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

void dfs(int start, const vector<vector<int>>& adj) {
    vector<bool> visited(adj.size(), false);
    stack<int> s;
    s.push(start);

    cout << "DFS: ";
    while (!s.empty()) {
        int v = s.top();
        s.pop();

        if (!visited[v]) {
            visited[v] = true;
            cout << v << " ";
            for (int u = adj.size() - 1; u >= 0; u--) {
                if (adj[v][u] == 1 && !visited[u]) {
                    s.push(u);
                }
            }
        }
    }
}

void bfs(int start, const vector<vector<int>>& adj) {
    vector<bool> visited(adj.size(), false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    cout << "BFS: ";
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (int u = 0; u < adj.size(); u++) {
            if (adj[v][u] == 1 && !visited[u]) {
                q.push(u);
                visited[u] = true;
            }
        }
    }
}

int main() {
    cout << "Digite o número de vértices do grafo: ";
        int n; cin >> n;

    vector<vector<int>> adj(n, vector<int>(n));
    cout << "Digite a matriz de adjacência (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> adj[i][j];

    cout << endl;
    dfs(0, adj);
    cout << endl;
    bfs(0, adj);
    cout << endl;

    return 0;
}
