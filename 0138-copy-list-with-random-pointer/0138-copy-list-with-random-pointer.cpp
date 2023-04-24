/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
        void insert(Node* &head,Node* &tail, int data){
            Node* newNode=new Node(data);
            if(head==NULL){
                head=tail=newNode;
                return;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
        }
public:
    Node* copyRandomList(Node* head) {
        Node* clonehead=NULL;
        Node* clonetail=NULL;
        Node* temp=head;
        while(temp!=NULL){
            insert(clonehead,clonetail,temp->val);
            temp=temp->next;
        }
        
        unordered_map<Node*,Node*>original;
        Node* originalNode=head;
        Node* cloneNode=clonehead;
        
        while(originalNode!=NULL and cloneNode!=NULL){
            original[originalNode]=cloneNode;
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        
        originalNode=head;
        cloneNode=clonehead;
        
        while(originalNode!=NULL){
            cloneNode->random=original[originalNode->random];
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        return clonehead;
    }
};