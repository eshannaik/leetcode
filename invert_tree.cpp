// https://leetcode.com/problems/invert-binary-tree/submissions/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return NULL;
        TreeNode* node = root->right;
        root->right = invertTree(root->left);
        root->left = invertTree(node);
        return root;
    }
