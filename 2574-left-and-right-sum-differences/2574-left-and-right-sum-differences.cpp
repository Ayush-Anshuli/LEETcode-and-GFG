class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left;
        int leftsum=0;
        
        for(int i=0;i<=nums.size()-1;i++){
            left.push_back(leftsum);
            leftsum+=nums[i];
        }
        
        vector<int>right;
        int rightsum=0;
        
        for(int i=nums.size()-1;i>=0;i--){
            right.push_back(rightsum);
            rightsum+=nums[i];
        }
        sort(right.begin(),right.end(),greater<int>());
        
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(left[i]-right[i]));
        }
        return ans;
    }
};