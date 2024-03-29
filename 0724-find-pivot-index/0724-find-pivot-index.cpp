class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum=accumulate(nums.begin(),nums.end(),0);
        int left=0;
        
        for(int i=0;i<nums.size();i++){
            rightsum-=nums[i];
            if(rightsum==left){
                return i;
            }
            left+= nums[i];
        }
        return -1;
    }
};