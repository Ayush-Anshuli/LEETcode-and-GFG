class Solution {
public:
    
    bool possible(vector<int>& weights, int days,int mid){
        int a=1;
        int b=0;
        for(int i=0;i<weights.size();i++){
            if(b+weights[i] <= mid){
                b+=weights[i];
            }
            else{
                a++;
                b=0;
                if(a>days || weights[i] > mid){
                    return false;
                }
                b = weights[i];
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int s=0;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        int e=sum;
        int ans=0;
        int mid=s+(e-s)/2;
        
        while(s<=e){
            if(possible(weights,days,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};