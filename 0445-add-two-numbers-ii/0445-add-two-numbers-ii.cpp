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
        ListNode* reverse(ListNode* head){
            ListNode* prev=NULL;
            ListNode* curr=head;
            ListNode* next=NULL;
            
            while(curr!=NULL){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            return prev;
        }
    
    void insert(ListNode* &head, ListNode* &tail, int val){
        ListNode* temp=new ListNode(val);
        if(head==NULL){
            head=tail=temp;
            return;
        }
        else{
            tail->next=temp;
            tail=temp;
            temp->next=NULL;
        }
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* r1=reverse(l1);
        ListNode* r2=reverse(l2);
        
        ListNode* temp1=r1;
        ListNode* temp2=r2;
        
        ListNode* head=NULL;
        ListNode* tail=NULL;
        
        int carry=0;
        
        while(temp1!=NULL and temp2!=NULL){
            int sum=temp1->val+temp2->val+carry;
            if(sum>=10){
                insert(head,tail,sum%10);
                carry=1;
            }
            else{
                insert(head,tail,sum);
                carry=0;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        while(temp1!=NULL){
            int sum=temp1->val+carry;
            if(sum>=10){
                insert(head,tail,sum%10);
                carry=1;
            }
            else{
                insert(head,tail,sum);
                carry=0;
            }
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            int sum=temp2->val+carry;
            if(sum>=10){
                insert(head,tail,sum%10);
                carry=1;
            }
            else{
                insert(head,tail,sum);
                carry=0;
            }
            temp2=temp2->next;
        }
        if(carry==1) insert(head,tail,1);
        return reverse(head);
    }
};