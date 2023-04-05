class Solution {
public:
    void digit(int a,vector<int>&ans){
        string s=to_string(a);
        for(auto it:s){
            ans.push_back(it-'0');
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(auto it: nums){
            digit(it,ans);
        }
        return ans;
    }
};