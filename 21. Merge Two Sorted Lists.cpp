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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;  
        if(l2==NULL) return l1;
        ListNode* l3;
         if(l1->val<l2->val){
                l3=l1;
                l1=l1->next;
            }
         else{
                l3=l2;
                l2=l2->next;
            }
        ListNode* p=l3;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val<l2->val){
                p->next=l1;
                p=p->next;
                l1=l1->next;
            }
            else{
                p->next=l2;
                p=p->next;
                l2=l2->next;
            }
        }
           if(l1!=NULL)
           {
               p->next=l1;
               return l3;
           }
           if(l2!=NULL)
           {
               p->next=l2;
               return l3;
           }
           return l3;
    }
};
