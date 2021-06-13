// https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> v;
        pre(root,v);
        return v;
    }
    void pre(TreeNode* root,vector <int> &v)
    {
        if(root == NULL)
            return;
        v.push_back((root->val));
        pre(root->left,v);
        pre(root->right,v);
    }
};
