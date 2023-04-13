class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
    
        set<int> a;
        for(auto it: nums1){
            for(auto k: nums2){
                if(it==k){
                    a.insert(it);
                }
            }
        }
        for(auto it: a){
            ans.push_back(it);
        }
        return ans;
    }
};