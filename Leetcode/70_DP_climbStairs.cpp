/**
 * author: Murilo Guizelin
 * date: 2025-07-03
 * hour: 23:06:47
 * Link: https://leetcode.com/problems/climbing-stairs/description/
 */
// Usando dp para resolver.
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int memo[n + 1];
        memo[1] = 1;
        memo[2] = 2;

        for (int i = 3; i <= n; i++) memo[i] = memo[i - 1] + memo[i - 2];
        return memo[n];
    }
};