#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1000];
vector<int> visited(1000, 0);
vector<int> topo;

void dfs(int v) {
    visited[v] = 1;
    for (int u : adj[v])
        if (!visited[u])
            dfs(u);
    topo.push_back(v); // adiciona ao final
}

int main() {
    int V = 4;
    adj[0] = {1, 2};
    adj[1] = {3};
    adj[2] = {3};

    for(int i=0; i<V; i++)
        if(!visited[i]) dfs(i);

    reverse(topo.begin(), topo.end()); // ordem correta
    for(int v : topo) cout << v << " ";
}
