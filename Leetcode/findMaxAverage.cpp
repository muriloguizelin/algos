class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            int n = 0;
            int len = nums.size();
            double soma = 0;
            for(int i=0;i<k;i++){
                soma += nums[i];
            }
            double res = soma / k;
            for(int i=k;i<len;i++){
                soma += nums[i];
                soma -= nums[i-k];
                res = max(soma/k, res);
            }
            return res;
        }
    };