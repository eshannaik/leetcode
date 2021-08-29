// https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isTreeSymmetric(root,root);
    }
    bool isTreeSymmetric(TreeNode* root1, TreeNode* root2){
        if(!root1 && !root2) return true;
        if(!root1 || !root2) return false;
         return (root1->val == root2->val) && isTreeSymmetric(root1->left,root2->right)&& isTreeSymmetric(root1->right, root2->left);
    }
};
