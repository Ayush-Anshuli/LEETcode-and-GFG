/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    private:
    void insert(ListNode* &heads,ListNode* &tails , int data){
        ListNode* temp=new ListNode(data);
        if(heads==NULL){
            heads=temp;
            tails=temp;
            return;
        }
        else{
        tails->next=temp;
        tails=temp;   
        }
    }
    
    ListNode* add(ListNode* first,ListNode* second){
        int carry=0;
        ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        
        while(first!=NULL and second!=NULL){
            int sum=carry+first->val+second->val;
            if(sum>=10){
                sum%=10;
                carry=1;
            }
            else{
                carry=0;  
            }
            insert(anshead,anstail,sum);
            first=first->next;
            second=second->next;
        }
        while(first!=NULL){
            int sum=carry+first->val;
            if(sum>=10){
                sum%=10;
                carry=1;
            }
            else{
                carry=0;
            }
            insert(anshead,anstail,sum);    
            first=first->next;
        }
        while(second!=NULL){
            int sum=carry+second->val;
            if(sum>=10){
                sum%=10;
                carry=1;
            }
            else{
                carry=0;     
            }
           
            insert(anshead,anstail,sum);
            second=second->next;
        }
       if(carry==1){
           insert(anshead,anstail,1);
       }
        return anshead;
    }
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=add(l1,l2);
        return ans;
    }
};