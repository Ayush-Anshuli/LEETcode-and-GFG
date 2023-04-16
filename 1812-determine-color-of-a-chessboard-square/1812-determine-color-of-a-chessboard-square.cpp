class Solution {
public:
    bool squareIsWhite(string coordinates) {
        //map<char,int>m={{'a',1},{'b',2},{'c',3},{'d',4},{'e',5},{'f',6},{'g',7},{'h',8}};
        int a1=coordinates[0]-'a'+1;
        int a2=coordinates[1]-'0';
        
        if((a1+a2)%2==0) return false;
        else
            return true;
    }
};