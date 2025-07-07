#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n; cin >> n;
    long long sum = n*(n+1)/2;
    if(sum & 1) cout << "NO";
    else{
        vector<long long> set1, set2;
        cout << "YES\n";
        long long res = sum/2;
        for(long long i=n;i >= 1;i--){
            if(i <= res){
                set1.push_back(i);
                res -= i;
            }
            else set2.push_back(i);
        }
        cout << set1.size() << "\n";
        for(auto x : set1) cout << x << " ";
        cout << "\n";
        cout << set2.size() << "\n";
        for(auto x : set2) cout << x << " ";
        
    }
}