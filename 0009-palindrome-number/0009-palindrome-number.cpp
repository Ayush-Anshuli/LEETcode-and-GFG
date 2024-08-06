class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        long long temp = x;
        long long reverse = 0;
        
        while(temp) {
            long long digit = temp%10;
            reverse = (reverse*10)+digit;
            temp/=10;
        }
        if(x==reverse) {
            return true;
        }
        else{
            return false;
        }
    }
};