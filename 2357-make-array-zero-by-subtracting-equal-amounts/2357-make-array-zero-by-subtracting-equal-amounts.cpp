class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>a;
        for(auto it: nums){
            a.insert(it);
        }
        return a.size()-a.count(0);
    }
};