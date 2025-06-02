/**
 * author: Murilo Guizelin
 * date: 2025-05-23
 * hour: 15:30:27
 * Link: https://codeforces.com/gym/105904
 */



#include <bits/stdc++.h>

using namespace std;

bool inside_pol(int x, int y)
{
    if (y == 0)
    {
        return -200 <= x && x <= 200;
    }
    if (y < 0)
    {
        x *= -1;
        y *= -1;
    }
    return y <= 100 && x + y <= 100 && y-x <= 200;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        cout << (inside_pol(x, y) ? "S" : "N") << "\n";
    }
}