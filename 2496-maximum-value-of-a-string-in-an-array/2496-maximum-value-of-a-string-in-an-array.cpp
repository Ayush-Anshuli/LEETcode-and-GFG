class Solution {
    private:
        int digit(string s){
            bool flag=false;
            for(auto it: s){
                if(!isdigit(it)) flag=true;
                // break;
            }
            return flag ? s.length() : stoi(s); 
        }
public:
    int maximumValue(vector<string>& strs) {
        int maxi=INT_MIN;
        for(auto it: strs){
            maxi=max(maxi,digit(it));
        }
        return maxi;
    }
};