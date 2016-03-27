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
    void deleteNode(ListNode* node) {
       ListNode* cur = node;
        ListNode* post = cur->next; // except the tail, thus has access to the next
        while(1)
        {
            cur->val = post->val;
            if(post->next == NULL)
            {
                cur->next = NULL;
                return;
            }
            else
            {
                cur = post;
                post = post->next;
            }
        }
    }
};
