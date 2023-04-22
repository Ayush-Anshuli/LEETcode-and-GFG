class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> ans;
        int sum=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                sum+=mat[i][j];
            }
            ans.push_back({sum,i});
            sum=0;
        }
        sort(ans.begin(),ans.end());
        vector<int>v;
        for(int i=0;i<ans.size();i++){
                v.push_back(ans[i].second);
        }
        vector<int>finalans;
        for(int i=0;i<k;i++){
            finalans.push_back(v[i]);
        }
        return finalans;
    }
};
