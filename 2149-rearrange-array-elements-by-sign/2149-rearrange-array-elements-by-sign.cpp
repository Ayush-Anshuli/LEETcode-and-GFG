class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
//         IT TAKES EXTRA SPACE 
//         vector<int>temp1;
//         vector<int>temp2;
//         vector<int>ans;
        
//         for(int i = 0;i<nums.size();i++){
//             if(nums[i]>0){
//                 temp1.push_back(nums[i]);
//             }
//             else temp2.push_back(nums[i]);
//         }
//         int i = 0;
//         int j = 0;
//         while(i<temp1.size() and j<temp2.size()){
//             ans.push_back(temp1[i]);
//             ans.push_back(temp2[j]);
//             i++;
//             j++;
//         }
//         return ans;

        
//         TWO POINTER
        int positive  = 0;
        int negative = 1;
        vector<int> ans(nums.size(),0);
        
        for(int i =0;i<nums.size();i++){
            if(nums[i] > 0){
             ans[positive] = nums[i];
                positive+=2;
            }
            else{
                ans[negative] = nums[i];
                negative+=2;
            }
        }
        return ans;
    }
};