class Solution {
    bool isValid(string s,map<char,int>&mp){
        map<char,int>m;
        for(auto it: s){
            m[it]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]<m[s[i]]) return false; 
        }
        return true;
    }
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        map<char,int>mp;
        for(auto it: chars){
            mp[it]++;
        }
        for(int i=0;i<words.size();i++){
            if(isValid(words[i],mp)){
                ans+=words[i].size();
            }
        }
        return ans;
    }
};