class Solution {
    bool isVowel(char ch){
        if( ch=='a' or  ch=='e' or  ch=='i' or  ch=='o' or  ch=='u' or  ch=='A' or  ch=='E' or  ch=='I' or  ch=='O' or  ch=='U') return true;
        else return false;
    }
public:
    bool halvesAreAlike(string s) {
        string s1,s2;
        int count1=0,count2=0;

        for(int i=0;i<s.size();i++){
            if(i<s.size()/2) s1+=s[i];
            else s2+=s[i];
        }
        for(int i=0;i<s1.size();i++){
            if(isVowel(s1[i])) count1++;
            if(isVowel(s2[i])) count2++;
        }
        return count1==count2;
    }
};