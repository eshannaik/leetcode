// https://leetcode.com/problems/balanced-binary-tree/submissions/

class Solution {
public:
    bool flag=true;
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        int h1 = height(root->left);
        int h2 = height(root->right);
        
        if(abs(h1-h2)>1)
            flag=false;
        return max(h1,h2)+1;
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return flag;
    }
};
