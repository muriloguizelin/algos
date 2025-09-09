#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> pos(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        int card;
        cin >> card;
        pos[card] = i;
    }
    int groups = 1;
    for (int i = 1; i < n; ++i)
    {
        if (pos[i] > pos[i + 1])
        {
            groups++;
        }
    }
    if (n == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        int shuffles = 0;
        while ((1 << shuffles) < groups)
        {
            shuffles++;
        }
        cout << shuffles << endl;
    }
    return 0;
}