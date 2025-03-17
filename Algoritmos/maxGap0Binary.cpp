#include <iostream>

using namespace std;

int solution(int N) {
    int maxGap = 0, currentGap = 0;
    bool counting = false;

    while (N > 0) {
        cout << N << '\n';
        if (N & 1) {
            if (counting) {
                maxGap = max(maxGap, currentGap);
            }
            counting = true;
            currentGap = 0;
        } else if (counting) {
            currentGap++;
        }
        N >>= 1;
    }
    
    return maxGap;
}

int main(){
    solution(10);
}