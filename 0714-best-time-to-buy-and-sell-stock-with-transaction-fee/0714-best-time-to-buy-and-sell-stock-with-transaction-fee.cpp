class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int s0=0 ,  s1=INT_MIN;
        for(int it: prices){
            int temp=s0;
            s0=max(s0,s1+it);
            s1=max(s1,temp-it-fee);
        }
        return s0;
    }
};


