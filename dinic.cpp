#include<bits/stdc++.h>
using namespace std;

struct FlowEdge {
    int v, u;
    long long cap, flow = 0;
    FlowEdge(int v, int u, long long cap) : v(v), u(u), cap(cap) {}
};

struct Dinic {
    const long long flow_inf = 1e18;
    vector<FlowEdge> edges;
    vector<vector<int>> adj;
    int n, m = 0;
    int s, t;
    vector<int> level, ptr;
    queue<int> q;

    Dinic(int n, int s, int t) : n(n), s(s), t(t) {
        adj.resize(n);
        level.resize(n);
        ptr.resize(n);
    }

    void add_edge(int v, int u, long long cap) {
        // constroi a aresta e a aresta reversa
        edges.emplace_back(v, u, cap);
        edges.emplace_back(u, v, 0);
        adj[v].push_back(m);
        adj[u].push_back(m + 1);
        m += 2;
    }
    // BFS para construir a arvore
    bool bfs() {
        fill(level.begin(), level.end(), -1);
        level[s] = 0;
        q.push(s);
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int id : adj[v]) {
                if (edges[id].cap - edges[id].flow < 1)
                    continue;
                if (level[edges[id].u] != -1)
                    continue;
                level[edges[id].u] = level[v] + 1;
                q.push(edges[id].u);
            }
        }
        // se o T não é alcançavel então não existe caminho
        return level[t] != -1;
    }
    // DFS para encontrar um caminho aumentante na arvore
    long long dfs(int v, long long pushed) {
        if (pushed == 0)
            return 0;
        if (v == t)
            return pushed;
        for (int& cid = ptr[v]; cid < (int)adj[v].size(); cid++) {
            int id = adj[v][cid];
            int u = edges[id].u;
            if (level[v] + 1 != level[u] || edges[id].cap - edges[id].flow < 1)
                continue;
            long long tr = dfs(u, min(pushed, edges[id].cap - edges[id].flow));
            if (tr == 0)
                continue;
            edges[id].flow += tr;
            edges[id ^ 1].flow -= tr;
            return tr;
        }
        return 0;
    }

    long long f = 0;
    long long flow  () {
        //long long f = 0;
        while (true) {
            if (!bfs())
                break;
            fill(ptr.begin(), ptr.end(), 0);
            while (long long pushed = dfs(s, flow_inf)) {
                f += pushed;
            }
        }
        return f;
    }
    // Se rodarmos o bfs denovo podemos encontrar as arestas que estão no corte 
    // e também os vertices que estão em cada lado.
    vector<pair<int, int>> mincut()
    {
        vector<pair<int, int>> cut;
        bfs();
        for (auto & e: edges) {
            if (e.flow == e.cap && level[e.v] != -1 && level[e.u] == -1 && e.cap > 0) {
                cut.emplace_back(e.v, e.u);
            }
        }
        return cut;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    // numero de nós, source, sink
    Dinic d(n+1,1,n);
    while(m--)
    {
        int u, v, cap;
        cin >> u >> v >> cap;
        d.add_edge(u,v,cap);
    }
    cout << d.flow() << '\n';
}