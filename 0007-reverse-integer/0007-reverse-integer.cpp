class Solution {
public:
    int reverse(int x) {
        int num = x;
        int reverseNumber = 0;
        while(num){
            if(reverseNumber>INT_MAX/10 || reverseNumber<INT_MIN/10){
                return 0;
            }
            int digit = num%10;
            reverseNumber = (reverseNumber*10) + digit;
            num = num/10;
        }
        return reverseNumber;
    }
};