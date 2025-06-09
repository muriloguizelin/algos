/**
 * author: Murilo Guizelin
 * date: 2025-06-07
 * hour: 17:58:43
 * Link: https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/description/
 */

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        unordered_set<int> primes = {2,3,5,7,11,13,17,19};
        int res = 0;
        for (int i = left; i <= right; ++i){
            int bits = __builtin_popcount(i);
            if (primes.count(bits)) res++;
        }
        return res;
    }
};


// nao funcionou pq deu overflow no for do isPrimo.
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<bool> isPrimo(right+1, true);
        isPrimo[0] = isPrimo[1] = false;
        for(int i=2;i<=right;i++){
            if(isPrimo[i]){
                for(int j=i*i;j<=right;j+=i){
                    isPrimo[j] = false;
                }
            }
        }
        int ans = 0;
        for(int i=left;i<=right;i++){
            int x =  __builtin_popcount(i);
            if(isPrimo[x]) ans++;
        }
        return ans;
    }
};