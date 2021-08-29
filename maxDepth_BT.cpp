// https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int l=0,r=0;
        if(root==NULL)
            return 0;
        r=maxDepth(root->right);
        l=maxDepth(root->left);
        if(r>l)
            return r+1;
        return l+1;
    }
};
