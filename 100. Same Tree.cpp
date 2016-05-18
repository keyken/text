/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==0&&q==0)
        {
            return true;
        }
        else if(p!=0&&q==0)
        {
            return false;
        }
        else if(p==0&&q!=0)
        {
            return false;
        }
        else if(p!=0&&q!=0&&p->val!=q->val)
        {
            return false;
        }
        else
        {
            return(isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));
        }
    }
};
