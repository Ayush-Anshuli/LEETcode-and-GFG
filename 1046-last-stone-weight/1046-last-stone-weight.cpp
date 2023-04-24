class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int ans;
        int count=0;
        
        if(stones.size()==1){
            return stones[0];
        }
        while(count!=stones.size()-1){
            sort(stones.begin(),stones.end());
            stones[stones.size()-1]=stones[stones.size()-1]-stones[stones.size()-2];
            stones[stones.size()-2]=0;
            count++;
        }
        return stones[stones.size()-1];
    }
};