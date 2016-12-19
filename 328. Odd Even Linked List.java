/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode oddEvenList(ListNode head) {
        if(head==null||head.next==null) return head;
        ListNode L1=head;
        ListNode L2=head.next;
        ListNode L3=head.next;
        while(L3!=null&&L3.next!=null){
            L1.next=L3.next;
            L1=L1.next;
            L3.next=L1.next;
            L3=L3.next;
        }
        L1.next=L2;
        return head;
    }
}