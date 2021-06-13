// https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/
// Preorder
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

// https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/
// Inorder

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> v;
        inorder(root,v);
        return v;
    }
    void inorder(TreeNode* root,vector <int> &v)
    {
        if(root==NULL)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
};

// https://leetcode.com/problems/binary-tree-postorder-traversal/submissions/
// Postorder

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> v;
        postorder(root,v);
        return v;
    }
    void postorder(TreeNode* root,vector <int> &v)
    {
        if(root==NULL)
            return;
        postorder(root->left,v);
        postorder(root->right,v);
        v.push_back(root->val);
    }
};
