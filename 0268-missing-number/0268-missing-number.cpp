class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(count == nums[i]){
                count++;
            }
        }
        // cout<<count;
        return count;
    }
};