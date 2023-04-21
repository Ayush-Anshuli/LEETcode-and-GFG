// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st=0;
        int ei=n;
        while(st<=ei){
            int mid=st+(ei-st)/2;
            if(isBadVersion(mid)==false){
                st=mid+1;
            }
            else{
                ei=mid-1;
            }
        }
        return st;
    }
};