#include <iostream>
#include <algorithm>

using namespace std;

void dfs(tree* node, bool cameFromLeft, int length, int &maxZigZag) {
    if (!node) return;

    // Update the maximum zigzag length found
    maxZigZag = max(maxZigZag, length);

    // If we came from the left, go right next
    dfs(node->r, true, cameFromLeft ? length + 1 : 1, maxZigZag);

    // If we came from the right, go left next
    dfs(node->l, false, !cameFromLeft ? length + 1 : 1, maxZigZag);
}

int solution(tree* T) {
    if (!T) return 0;
    
    int maxZigZag = 0;

    // Start exploring both possible paths from the root
    dfs(T->l, false, 0, maxZigZag);  // Start by going left
    dfs(T->r, true, 0, maxZigZag);   // Start by going right

    return maxZigZag;
}
