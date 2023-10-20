class Solution {
public:
    int finalValueAfterOperations(vector<string>& oper) {
        int count=0;
        for(int i=0;i<oper.size();i++){
            if(oper[i]=="++X") {
                count++;
            }
            else if(oper[i]=="X++"){
                count++;
            }
            else if(oper[i]=="X--"){
                count--;
            }
            else if(oper[i]=="--X"){
                count--;
            }
        }
        return count;
    }
};