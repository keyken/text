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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int min;
        int max;
        if(root==NULL)
        {
            return NULL;
        }
        if(p->val>q->val){
            min=q->val;
            max=p->val;
        }
        else{
            min=p->val;
            max=q->val;
        }
        if(max<root->val)
        {
            return lowestCommonAncestor(root->left, p, q); 
        }
        if(min>root->val)
        {
            return lowestCommonAncestor(root->right, p, q); 
        }
        return root;
    }
};
