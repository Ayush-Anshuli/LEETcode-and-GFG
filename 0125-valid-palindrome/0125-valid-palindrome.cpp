class Solution {
    private: 
        bool valid(char ch){
            if((ch>='a' and ch<='z') || (ch>='A' and ch<='Z') || (ch>='0' and ch<='9')){
                return true;
            }
            return false;
        }
    char lowercase(char ch){
        if((ch>='a' and ch<='z') || (ch>='0' and ch<='9')){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    
    bool palindrome(string a){
        int i=0;
        int j=a.size()-1;
        while(i<j){
            if(a[i]!=a[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.size();i++){
            temp[i]=lowercase(temp[i]);
        }
        return palindrome(temp);
    }
};