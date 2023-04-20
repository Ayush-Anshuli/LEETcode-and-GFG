class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int a=max_element(nums.begin(),nums.end())-nums.begin();
        return a;
    }
};