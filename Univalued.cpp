// https://leetcode.com/problems/univalued-binary-tree/submissions/

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        vector <int> v;
        inorder(root,v);
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
                return false;
        }
        return true;
        
    }
    void inorder(TreeNode* root,vector <int> &v)
    {
        if (root==NULL)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
};

//alternate

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        return inorder(root,root->val);
        
    }
    bool inorder(TreeNode* root,int x)
    {
        if (root==NULL)
            return true;
        if(root->val != x)
            return false;
        return inorder(root->left,x) && inorder(root->right,x);
    }
};
