#include <bits/stdc++.h>

using namespace std;
//bubblesort (O n^2), basicamente ele vai iterar pela lista 2x até que todos os elementos estejam ordenados
int main(){
    vector<int> array = {9, -1, 0, 1, 5, 2, -5, 2};
    int carry;
    for(int i=0;i<array.size();i++){
        for(int j=0;j<array.size()-1;j++){
            if(array[j] > array[j+1]){
                carry = array[j];
                array[j] = array[j+1];
                array[j+1] = carry;
            }
        }
    }
    cout << array[3]; // 1
}