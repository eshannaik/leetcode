// https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/submissions/

class Solution {
public:
    int sum=0;
    void postorder(TreeNode* root){
        if(!root)
            return;
        postorder(root->right);
        root->val += sum;
        sum = root->val;
        postorder(root->left);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        postorder(root);
        return root;
    }
};
