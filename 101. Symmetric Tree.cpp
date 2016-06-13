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
    bool mirror(TreeNode* left,TreeNode* right)
        {
            if(left==NULL&&right==NULL) return true;
            if(left==NULL&&right!=NULL) return false;
            if(left!=NULL&&right==NULL) return false;
            if(left->val==right->val)
            {
                return mirror(left->left,right->right)&&mirror(left->right,right->left);
            }
            else return false;
        }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {
            return true; 
        }
        else
        {
            return mirror(root->left,root->right);
        }
    }
};
