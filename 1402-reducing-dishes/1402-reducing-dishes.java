class Solution {
    public int maxSatisfaction(int[] satisfaction) {
        Arrays.sort(satisfaction);
        int p=0,r=0;
        for(int i=satisfaction.length-1;i>=0;i--){
            p+=satisfaction[i];
            if(p<0){
                break;
            }
            r+=p;
        }
        return r;
    }
}