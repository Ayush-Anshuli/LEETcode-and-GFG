class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        int j=1;
        while(i<nums.size() and j<nums.size()){
            for(int k=0;k<nums[i];k++){
                ans.push_back(nums[j]);
            }
            i+=2;
            j+=2;
        }
        return ans;
    }
};