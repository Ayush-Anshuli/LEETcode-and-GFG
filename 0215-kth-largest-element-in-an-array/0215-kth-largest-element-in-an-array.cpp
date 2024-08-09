class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int a = 0;
        for(int i = 0 ;i<nums.size() ; i++){
            a = nums[nums.size()-k];
                break;
        }
        return a;
    }
};