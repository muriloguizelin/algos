#include <iostream>
#include <vector>

// Sieve of Eratosthenes: Finds all primes up to n
std::vector<int> sieve(int n) {
    std::vector<bool> is_prime(n + 1, true);
    std::vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i])
            primes.push_back(i);
    }
    return primes;
}

int main() {
    int n;
    std::cout << "Find all primes up to: ";
    std::cin >> n;
    std::vector<int> primes = sieve(n);
    std::cout << "Primes up to " << n << ":\n";
    for (int p : primes)
        std::cout << p << " ";
    std::cout << std::endl;
    return 0;
}