class Solution {
    public int maxProduct(int[] nums) {
        Arrays.sort(nums);
        int ans=0;
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                ans=(nums[i]-1)*(nums[j]-1);
            }
        }
        return ans;
    }
}