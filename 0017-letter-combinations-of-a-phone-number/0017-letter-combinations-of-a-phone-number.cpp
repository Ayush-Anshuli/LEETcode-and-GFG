class Solution {
    private:
    void solve(string digit,int index,string output,string mapping[],vector<string>&ans){
        if(index>=digit.length()){
            ans.push_back(output);
            return;
        }
        int number=digit[index]-'0';
        string value=mapping[number];
        
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digit,index+1,output,mapping,ans);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        string output="";
        int index=0;
        
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,output,mapping,ans);
        return ans;
    }
};