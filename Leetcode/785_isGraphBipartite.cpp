/**
 * author: Murilo Guizelin
 * date: 2025-08-20
 * hour: 18:00:36
 * Link: https://leetcode.com/problems/is-graph-bipartite/
 */
/* bfs (queue, color, graph (lista), node inicial), se a cor for -1 entao pintar, se ela nao for -1, ela vai ser 1 ou 0, se for igual entao é falso.

*/
class Solution {
public:
    bool bfs(vector<vector<int>>& graph, int start, vector<int>& color) {
        queue<int> q;
        q.push(start);
        color[start] = 0;
        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int v : graph[u]) {
                if (color[v] == -1) {
                    color[v] = 1 - color[u];
                    q.push(v);
                } else if (color[v] == color[u]) {
                    return false; // vizinhos com a mesma cor → não bipartido
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1); // -1 pois nao visitado

        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                if (!bfs(graph, i, color)) {
                    return false;
                }
            }
        }
        return true;
    }
};
