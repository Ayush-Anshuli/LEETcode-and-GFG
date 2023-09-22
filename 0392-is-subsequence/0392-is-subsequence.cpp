class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0){
            return true;
        }
        int a=0;
        int b=0;
        while(b<t.size()){
            if(t[b]==s[a]){
                a++;
                if(a==s.size()){
                    return true;
                }
            }
            b++;
        }
        return false;
    }
};