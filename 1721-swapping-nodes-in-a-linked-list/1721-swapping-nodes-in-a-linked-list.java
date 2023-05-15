/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    

    public ListNode swapNodes(ListNode head, int k) {
   
        ListNode curr=head; 
        int count=0;
        while(curr!=null){
            curr=curr.next;
            count++;
        }
        ListNode first=head;
        ListNode second=head;
        for(int i=1;i<k;i++){
            first=first.next;
        }
        for(int i=1;i<count-k+1;i++){
            second=second.next;
        }
        int  temp1=first.val;
        int temp2=second.val;
        first.val=temp2;
        second.val=temp1;
        return head;
    }
}