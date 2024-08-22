class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         BRUTE FORCE TLE
        // sort(nums.begin(),nums.end());
        // for(int i = 0; i<nums.size();i++){
        //     int count = 0;
        //     for(int j = 0;j<nums.size();j++){
        //         if(nums[j] == nums[i]) count++;
        //     }
        //     if(count > (nums.size()/2)) return nums[i];
        // }
        // return -1;
// HASMAP
        map<int,int>mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp) {
            if(it.second > (nums.size()/2)){
                return it.first;
            }
        }
        return -1;
    }
};