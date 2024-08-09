class Solution {
public:
    bool check(vector<int>& nums) {
        int x =0;
        vector<int>temp;
        for(int i = 1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                x = i;
            }
        }
        for(int i = x; i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        for(int i = 0 ;i<x;i++){
            temp.push_back(nums[i]);
        }
        
        for(int i = 1; i<temp.size();i++){
            if(temp[i]>=temp[i-1]){ 
            }
            else{
                return false;
            }
        }
        
        return true;
    }
};