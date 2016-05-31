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
    bool hasCycle(ListNode *head) {
        ListNode *L1=head;
        ListNode *L2=head;
        while(L1!=NULL&&L2!=NULL&&L2->next!=NULL){
            L1=L1->next;
            L2=L2->next->next;
           if(L1==L2) return true;
        }
        return false;
    }
};
