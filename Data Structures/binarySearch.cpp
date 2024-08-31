#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
//
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) cin >> array[i];
    int a = 0, b = n-1, x, ind;
    cin >> x;
    while (a <= b) {
        int k = (a+b)/2;
        if (array[k] == x) {
            ind = k;
        }
        if (array[k] > x) b = k-1;
        else a = k+1;
    }
    cout << ind << "\n";

}
