/**
 * author: Murilo Guizelin
 * date: 2025-02-07
 * hour: 14:02:10
 * GitHub: https://github.com/muriloguizelin
 */

#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int> height) {
    int len = height.size();
    int start = 0, end = len - 1, sum = 0;
    while (start < end) {
        int high = min(height[start], height[end]);
        sum = max(sum, high * (end - start));
        if (height[start] < height[end]) {
            start++;
        } else {
            end--;
        }
    }
    return sum;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);
}
