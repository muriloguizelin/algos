#include <bitset>
#include <iostream>

constexpr int MAXN = 1e6 + 1;

constexpr auto computeSieve() {
    std::bitset<MAXN> isPrime;
    isPrime.set();
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAXN; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    auto isPrime = computeSieve();
    int t;
    std::cin >> t;
   if(isPrime[t]) std::cout << "YES" << std::endl;
    return 0;
}
