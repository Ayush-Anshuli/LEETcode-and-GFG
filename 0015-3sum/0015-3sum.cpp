class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//         IT IS A BETTER APPROACH BUT GIVES TLE
        // set<vector<int>>st;
        // for(int i =0;i<nums.size();i++){
        //     set<int>hash;
        //     for(int j = i+1;j<nums.size();j++){
        //         int third = -(nums[i]+nums[j]);
        //         if(hash.find(third)!=hash.end()){
        //             vector<int>temp = {nums[i],nums[j],third};
        //             sort(temp.begin(),temp.end());
        //             st.insert(temp);
        //         }
        //         hash.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>>ans(st.begin(),st.end());
        // return ans;
        
       vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(i!=0 and nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = nums.size()-1;
            
            while(j<k) {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum < 0) {
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else {
                    vector<int>temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k and nums[j] == nums[j-1]) j++;
                    while(j<k and nums[k] == nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};