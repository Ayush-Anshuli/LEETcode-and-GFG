class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans(matrix.size(),vector<int>(matrix[0].size()));
        int n=matrix.size();
        int m=matrix[0].size();
   
//     1st approach        
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         ans[j][i]=matrix[i][j];
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         matrix[i][j]=ans[i][j];
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     reverse(matrix[i].begin(),matrix[i].end());
        // }
        
//     2nd Approach
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[j][n-1-i]=matrix[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=ans[i][j];
            }
        }
        
        
    }
};