class Solution {
public:
    bool isValid(string s) {
       stack<char>a;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if( (ch=='(') || (ch=='{') || (ch=='[') ){
                a.push(ch);
            }
            else{
                if(a.empty()){
                    return false;
                }
                if((a.top()=='(' && ch==')' ) || (a.top()=='{' && ch== '}') || (a.top()=='[' && ch==']')){
                    a.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(a.empty()){
            return true;;
        }
        else{
            return false;
        }
    }
};