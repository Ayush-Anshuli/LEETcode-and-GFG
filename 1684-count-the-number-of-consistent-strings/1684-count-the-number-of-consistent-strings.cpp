class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        map<char,int>mp;
        for(auto it: allowed){
            mp[it]++;
        }
        bool x=true;
        for(int i=0;i<words.size();i++){
            x=true;
            for(auto it: words[i]){
                if(mp.find(it)==mp.end()) x=false;
            }
            if(x==true) count++;
        }
        return count;
    }
};