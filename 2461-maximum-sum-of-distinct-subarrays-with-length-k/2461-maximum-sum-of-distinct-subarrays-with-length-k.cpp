class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int,int>m;
        int i=0;
        int j=0;
        
        long long sum=0;
        long long ans=0;
        while(j<nums.size()){
            sum+=nums[j];
            m[nums[j]]++;
            
            if(k==j-i+1){
                if(m.size()==k){
                    ans=max(ans,sum);
                }
                sum-=nums[i];
                m[nums[i]]--;
                if(m[nums[i]]==0){
                    m.erase(nums[i]);
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};