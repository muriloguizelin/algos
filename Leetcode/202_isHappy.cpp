/**
 * author: Murilo Guizelin
 * date: 2025-05-21
 * hour: 19:19:07
 * Link: https://leetcode.com/problems/happy-number/description/
 */

class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7) return true;
        else if(n<10) return false;
        else{
            int sum=0;
            while(n>0){
                int temp=n%10;
                sum+= temp*temp;
                n=n/10;
            }
            return isHappy(sum);
        }
    }
};