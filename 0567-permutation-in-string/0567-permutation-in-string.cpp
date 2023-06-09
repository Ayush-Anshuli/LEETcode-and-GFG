class Solution {
    private:
        bool check(int a[26],int b[26]){
            for(int i=0;i<26;i++){
                if(a[i]!=b[i]){
                    return false;
                }
            }
            return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        
        for(int i=0;i<s1.size();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        
        
        int i=0;
        int k=s1.size();
        int count2[26]={0};
        while(i<k and i<s2.size()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        
        if(check(count1,count2)) return true;
        
        while(i<s2.size()){
            char newchar=s2[i];
            int index=newchar-'a';
            count2[index]++;
            
            char oldchar=s2[i-k];
            index=oldchar-'a';
            count2[index]--;
            
            i++;
            if(check(count1,count2)) return true;
        }
        return false;
    }
};