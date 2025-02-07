#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    double res, n, n1;
    vector<int> a = {1, 2}, b = {3, 4};
    vector<int> c;
    c.insert(c.end(), a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());
    sort(c.begin(), c.end());
    size = c.size();
    if(size == 1) { cout << c[0]; return 0; }
    if(size%2 == 0){
        n = c[size/2];
        n1 = c[(size -1)/2];
        res = (n + n1)/2;
        cout << res << n << n1 << "\n";
        return 0;
    }
    res = c[(size/2)+1];
    cout << res << "\n";
    return 0;

}   