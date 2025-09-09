#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;

void dfs(int r, int c) {
    if (r < 0 || r >= n || c < 0 || c >= m) return; //checking bounds
    if (grid[r][c] == '#') return; // return if isnt dot
    grid[r][c] = '#';  // mark the position as visited
    dfs(r+1, c); // up
    dfs(r-1, c); // down
    dfs(r, c+1); // right
    dfs(r, c-1); // left
}

int main() {
    cin >> n >> m;
    grid.resize(n); // what this do
    for (int i = 0; i < n; i++) cin >> grid[i];

    int rooms = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == '.') {
                rooms++;
                dfs(i, j);
            }

    cout << rooms << "\n";
}
