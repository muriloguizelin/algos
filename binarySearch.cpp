#include <bits/stdc++.h>

using namespace std;

void quicksort(vector<int>& v, int left, int right) {
        int i = left, j = right;
        int pivot = v[(left + right) / 2];
        while (i <= j) {
            while (v[i] < pivot) i++;
            while (v[j] > pivot) j--;
            if (i <= j) {
                swap(v[i], v[j]);
                i++;
                j--;
            }
        }
        if (left < j) quicksort(v, left, j);
        if (i < right) quicksort(v, i, right);
    }
int main(){
    vector<int> v = {9, 3, 2, -1, 5, 11};
    int size = v.size(), index = size/2, target, res = -1;
    cin >> target;
    quicksort(v, 0, v.size() - 1);
    for(int i=0;i<size;i++){
        if(target == v[index]) res = index;
        if(target > v[index]) index += 1;
        if(target < v[index]) index -= 1;
    }
    cout << res << "\n";
}