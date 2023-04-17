class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        vector<bool> ans;
        int max=INT_MIN;
        for(int i=0;i<c.size();i++){
            int n=*max_element(c.begin(),c.end());
            if(c[i]+e>=n) ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
    }
};