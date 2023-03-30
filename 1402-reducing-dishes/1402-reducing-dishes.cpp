class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        // vector<int> a;
        sort(satisfaction.begin(),satisfaction.end());
        int p=0,r=0;
        for(int i=satisfaction.size()-1; i>=0; i-- ){
            p+=satisfaction[i];
            if(p<0){
                break;
            }
            r+=p;
        }
        return r;
    }
};