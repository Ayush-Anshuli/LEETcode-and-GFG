class Solution {
    private:
        int ans(int i,int j,vector<vector<int>>& grid){
            int maxi=INT_MIN;
            for(int a=i-1;a<=i+1;a++){
                for(int b=j-1;b<=j+1;b++){
                    maxi=max(maxi,grid[a][b]);
                }
            }
             return maxi;   
        }
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size()-2;
        vector<vector<int>>v(n,vector<int>(n,0));
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                v[i][j]=ans(i+1,j+1,grid);
            }
        }
        return v;
    }
};