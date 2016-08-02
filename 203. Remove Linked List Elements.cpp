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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        ListNode *p1=head;
        while(p1->val==val){
            p1=p1->next;
            head=p1;
            if(head==NULL) return NULL;
        }
        while(p1->next!=NULL){
            if(p1->next->val==val)
            {
                p1->next=p1->next->next;
            }
            else{
            p1=p1->next;
            }
        }
        return head;
      /*  if (head == NULL) return NULL;  
        if (head->val==val) return removeElements(head->next,val);  
        head->next = removeElements(head->next,val);  
        return head;*/
    }
};
