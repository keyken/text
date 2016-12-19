/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> result=new LinkedList<Integer>();	
        if(root==null) return result;
        Stack<TreeNode> stack = new Stack<TreeNode>();
        TreeNode tree=root;
        while(!stack.empty()||tree!=null){
            while(tree!=null){
                 stack.push(tree);
                 tree=tree.left;
            }
           tree=stack.pop();
           result.add(tree.val);
           tree=tree.right;
        }
        return result;
    }
}