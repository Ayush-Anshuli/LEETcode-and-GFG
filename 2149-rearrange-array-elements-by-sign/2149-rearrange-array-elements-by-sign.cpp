class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>temp1;
        vector<int>temp2;
        vector<int>ans;
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0){
                temp1.push_back(nums[i]);
            }
            else temp2.push_back(nums[i]);
        }
        int i = 0;
        int j = 0;
        while(i<temp1.size() and j<temp2.size()){
            ans.push_back(temp1[i]);
            ans.push_back(temp2[j]);
            i++;
            j++;
        }
        return ans;
    }
};