class Solution {
    private:
         int reverse(int nums){
         int n=0;
            while(nums>0){
               n=(n*10)+(nums%10);
               nums/=10;
        }
        return n;
        
    }
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>a;
        for(auto it: nums){
            a.insert(it);
            a.insert(reverse(it));
        }
        return a.size();
    }
};