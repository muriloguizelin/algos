class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int n = 100;
        vector<bool> primo(n + 1, true);
        primo[0] = primo[1] = false;
        for (int i = 2; i * i <= n; i++) {
            if (primo[i]) {
                for (int j = i * i; j <= n; j += i) {
                    primo[j] = false;
                }
            }
        }

        int first = -1, last = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (primo[nums[i]]) {
                if (first == -1) first = i;
                last = i;
            }
        }

        return last - first;
    }
};
