/**
 * author: Murilo Guizelin
 * date: 2025-08-20
 * hour: 19:21:40
 * Link: https://leetcode.com/problems/number-of-provinces/description/
 */

class Solution {
public:
    void dfs(int u, vector<vector<int>>& grafo, vector<bool>& visited) {
        visited[u] = true;
        int n = grafo.size();
        for (int v = 0; v < n; v++) {
            if (grafo[u][v] == 1 && !visited[v]) dfs(v, grafo, visited);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int res = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, isConnected, visited);
                res++;
            }
        }

        return res;
    }
};
