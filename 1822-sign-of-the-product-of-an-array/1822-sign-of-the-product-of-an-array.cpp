class Solution {
public:
    int arraySign(vector<int>& nums) {
        int a=1;
        for(auto it: nums){
            if(it>0)  a*=1;
            else if(it<0) a*=-1;
            else return 0;
        }
        return a;
    }
};