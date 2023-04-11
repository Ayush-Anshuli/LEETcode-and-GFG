class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans;
        for(auto it: nums){
            if(it%2==0){
                ans.push_back(it);
            }
        }
        for(auto it: nums){
            if(it%2!=0){
                ans.push_back(it);
            }
        }
        int i=0;
        int j=ans.size()-1;
        vector<int>v;
        while(i<=j){
            v.push_back(ans[i]);
            v.push_back(ans[j]);
            i++;
            j--;
        }
        return v;
    }
};