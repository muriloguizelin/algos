#include <bits/stdc++.h>


using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    long long n, target;
    cin >> n >> target;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<long long, long long> hashMap;
    for(int i=0;i<n;i++){
        long long soma = target - v[i];
        if(hashMap.find(soma) != hashMap.end()){
            cout << hashMap[soma] + 1 << " " << i + 1;
            return 0;
        }
        hashMap[v[i]] = i;
    }
    cout << "IMPOSSIBLE";
}
