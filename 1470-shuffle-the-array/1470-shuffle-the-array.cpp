class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(nums.size());
        int a=0;
        int b=n;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans[i]=nums[a++];
            }
            else{
                 ans[i]=nums[b++];
            }
        }
        return ans;
    }
};