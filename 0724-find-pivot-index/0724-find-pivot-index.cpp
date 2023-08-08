class Solution {
public:
    int func(vector<int>& arr, int i,int j){
        int sum=0;
        for(int k=i;k<j;k++){
            sum+=arr[k];
        }
        return sum;
    }
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int a=func(nums,0,i);
            int b=func(nums,i+1,nums.size());
            if(a==b){
                return i;
            }
        }
        return -1;
    }
};