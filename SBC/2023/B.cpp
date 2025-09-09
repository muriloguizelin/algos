#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<int> pos(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        int card;
        cin >> card;
        pos[card] = i;
    }
    int groups = 1;
    for (int i = 1; i < n; ++i) if (pos[i] > pos[i + 1]) groups++;
    if (n == 0) cout << 0 << endl;
    else
    {
        int shuffles = (int)ceil(log2(groups));
        cout << shuffles << endl;
    }
    return 0;
}
