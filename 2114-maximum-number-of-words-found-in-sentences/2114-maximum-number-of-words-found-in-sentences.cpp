class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
        int maxi=INT_MIN;
        for(int i=0;i<sentences.size();i++){
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    count++;
                }
                maxi=max(count+1,maxi);
            }
            count=0;
        }
        return maxi;
    }
};