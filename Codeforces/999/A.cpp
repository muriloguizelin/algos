#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        int n, points = 0;
        cin >> n;
        vector<int> even, odd;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        vector<int> a;
        a.insert(a.end(), even.begin(), even.end());
        a.insert(a.end(), odd.begin(), odd.end());
        long long sum = 0;
        for (int x : a)
        {
            sum += x;
            if (sum % 2 == 0)
            {
                points++;
                while (sum % 2 == 0)
                {
                    sum /= 2;
                }
            }
        }
        cout << points << endl;
    }
    return 0;
}