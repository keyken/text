/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||head->next==NULL) return NULL;
        ListNode *l1=head;
        ListNode *l2=head;
        for(int i=0;i<n;i++)
        {
            l1=l1->next;
        }
        if(l1==NULL) return head->next;
        while(l1->next!=NULL)
        {
            l1=l1->next;
            l2=l2->next;
        }
        l2->next=l2->next->next;
        return head;
    }
};
