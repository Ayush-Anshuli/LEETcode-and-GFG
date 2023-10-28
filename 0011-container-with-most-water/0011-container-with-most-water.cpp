class Solution {
public:
    int maxArea(vector<int>& height) {
        int rp=0;
        int lp=height.size()-1;
        int maxi=0;
        
        while(lp>rp){
            int ht=min(height[rp],height[lp]);
            int width=lp-rp;
            int curr=ht*width;
            maxi=max(curr,maxi);
            if(height[rp]<height[lp]){
                rp++;
            }
            else{
                lp--;
            }
        }
        return maxi;
    }
};