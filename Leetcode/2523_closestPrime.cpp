/**
 * author: Murilo Guizelin
 * date: 2025-06-12
 * hour: 19:24:35
 * Link: https://leetcode.com/problems/closest-prime-numbers-in-range/description/ 
 */

class Solution {
public:

    bitset<1000001> bs;
    vector<int> primes;

    void crivo(int left, int right){
        bs.set();
        bs[0] = bs[1] = 0;
        for(long long i = 2; i <= right; i++){
            if(bs[i]){
                if(i>=left) primes.push_back(i);
                for(long long j = i * i; j <= right; j+=i) bs[j] = 0;
            }
        }
    }

    vector<int> closestPrimes(int left, int right) {
         crivo(left, right);
         if(primes.size() < 2) return {-1, -1};

         int dist = 1e9;
         vector<int> ans;

         for(int i = 1; i < primes.size(); i++){
            if(primes[i] - primes[i-1] < dist){
                dist = primes[i] - primes[i-1];
                ans = {primes[i-1], primes[i]};
            }
         }

         return ans;
    }
};