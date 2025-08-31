/**
 * author: Murilo Guizelin
 * date: 2025-08-20
 * hour: 19:21:40
 * Link: https://leetcode.com/problems/number-of-provinces/description/
 */

/*
isConnected = [[1,1,0],[1,1,0],[0,0,1]], grafo[u][v] == 1 significa que eles estao conectados, nesse caso é nao direcionado.
DFS(0): marca 0 como visitado, vê vizinho 1 → chama DFS(1), marca 1 como visitado, vê 0 (já visitado), 2 (não conectado) → termina, volta p/ DFS(0) → termina

DFS(2): marca 2, vê apenas ele mesmo → termina
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
