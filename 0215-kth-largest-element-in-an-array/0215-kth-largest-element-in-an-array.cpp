class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int largest = 0;
        
        for(int i=0;i<nums.size();i++){
            largest = nums[nums.size()-k];
        }
        return largest;
    }
};