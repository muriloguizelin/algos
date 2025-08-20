#include <bits/stdc++.h>

using namespace std;
//tempo O(log n), ja que ele itera pela metade da lista no maximo
int main(){
    vector<int> v = {9, 3, 2, -1, 5, 11};
    int size = v.size(), target, res = -1, it = 0;
    cin >> target;
    sort(v.begin(), v.end());
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (v[mid] == target) {
            res = mid;
            break;
        }
        if (v[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        it++;
    }
    cout << res << "\n";
    cout << "Total de iteracoes foi: " << it << "\n";

}