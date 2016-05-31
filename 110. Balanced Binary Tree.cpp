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
    int tree(TreeNode* root){ 
        if(root==NULL) return 0;
        int l,r;
        l=tree(root->left);
        r=tree(root->right);
        return 1+((l>r)?l:r);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int l,r;
        l=tree(root->left);
        r=tree(root->right);
        if(l>r+1||r>l+1) return false;
        else return isBalanced(root->left)&&isBalanced(root->right);
    }
};
