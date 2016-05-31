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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode* L1=head;
        ListNode* L2=head;
        int i;
        while(L1!=NULL&&L1->next!=NULL)
        {
            i=L1->val;
            L1->val=L2->next->val;
            L2->next->val=i;
            L1=L1->next->next;
            L2=L2->next->next;
        }
        return head;
    }
};
