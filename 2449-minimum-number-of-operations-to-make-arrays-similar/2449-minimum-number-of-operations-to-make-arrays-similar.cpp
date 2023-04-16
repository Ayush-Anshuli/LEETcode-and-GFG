class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());
        
        vector<int>en,on,et,ot;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                en.push_back(nums[i]);
            }
            else on.push_back(nums[i]);
            
            if(target[i]%2==0){
                et.push_back(target[i]);
            }
            else ot.push_back(target[i]);
        }
        long long ans=0;
        for(int i=0; i<en.size();i++){
            ans+=abs(en[i]-et[i])/2;
        }
        for(int i=0; i<on.size();i++){
            ans+=abs(on[i]-ot[i])/2;
        }
        return ans/2;
    }
};