// https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List <Integer> a = new ArrayList<>();
        inorder(root,a);
        return a;
    }
    public void inorder(TreeNode root,List a)
    {
        if(root == null)
            return;
        inorder(root.left,a);
        a.add(root.val);
        inorder(root.right,a);
    }
}
