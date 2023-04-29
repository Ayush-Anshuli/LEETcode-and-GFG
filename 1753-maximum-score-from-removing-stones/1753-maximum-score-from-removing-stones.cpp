class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        int count=0;
        
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        while(!pq.empty()){
            int p=pq.top();
            pq.pop();
            int q=pq.top();
            pq.pop();
            
            if(p==0 or q==0) break;
            
            pq.push(p-1);
            pq.push(q-1);
            count++;
        }
        return count;
    }
};