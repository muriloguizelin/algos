#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> &A, int K) {
    for(int i=0;i<K;i++){
        int last = A[A.size()-1];
        int slast = A[A.size()-2];
        A.insert(A.begin(), last);
        A.pop_back();
        A[A.size()-1] = slast;
    }
    return A;
}

int main(){
vector<int> A = {0, 0, 0, 1};
vector<int> result = solution(A, 4);
for (int i : result) {
    cout << i << " ";
}
}