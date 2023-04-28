class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word;
        vector<string>v;
        
        string ans="";
        while(ss>>word){
            v.push_back(word);
            
        } 
        for(int i=0;i<k-1;i++){
            ans+=v[i];
            ans+=" ";
        }
        ans+=v[k-1];
        return ans;
    }
};