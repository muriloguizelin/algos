class Solution {
    public:
        int minOperations(vector<int>& nums) {
    
             int ans = 0;
    
             for(int i = 0; i < nums.size(); i++){
                int real = nums[i] ^ (ans & 1); 
                if(!real) ans++;
             }
    
             return ans;
        }
    };