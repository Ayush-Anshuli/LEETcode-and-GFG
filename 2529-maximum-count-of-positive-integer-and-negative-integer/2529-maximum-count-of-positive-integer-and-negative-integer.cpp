class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cp=0;
        int cn=0;
        for(auto it: nums){
            if(it>0){
                cp++;
            }
            else if(it<0){
                cn++;
            }
        }
        return max(cp,cn);
    }
};