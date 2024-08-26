#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, target, final;
    cin >> n >> target;
    final = n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    for(int i = 0; i < n; i++){
        if(nums[i] >= target){
            final = i;
            break;
        }
    }
    cout << final;
}