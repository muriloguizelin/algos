#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {9, 3, 2, -1, 5, 11};
    int size = v.size(), index = size/2, target, res = 0;
    cin >> target;
    sort(v.begin(), v.end());
    for(int i=0;i<size;i++){
        if(target == v[index]) res = index;
        if(target > v[index]) index += 1;
        if(target < v[index]) index -= 1;
    }
    cout << res << "\n";
}