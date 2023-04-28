class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ans = 0;
        sort(nums.begin() , nums.end());
        for(int i=0;i<nums.size();i++){
            if(find(nums.begin() , nums.end() , original) != nums.end()){
                ans = original*2;
                original = ans;
            }
            else{
                return original;
            }
        }
        return ans;
    }
};