class Solution {
    public:
        bool isPalindrome(string s) {
            int right = s.size()-1;
            int left = 0;
            while(left <= right){
                while(right > left && !isalnum(s[left])) left++;
                while(right > left && !isalnum(s[right])) right--;
                if(tolower(s[left]) != tolower(s[right])) return false;
                left++;
                right--;
            }
            return true;
        }
    };