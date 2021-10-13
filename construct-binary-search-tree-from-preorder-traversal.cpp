// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/submissions/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* build(vector <int>& p,int& id,int limit)
    {
        if(id==p.size() || p[id]>limit)
            return NULL;
        
        int val = p[id++];
        TreeNode* root = new TreeNode(val);
        root->left = build(p,id,val);
        root->right = build(p,id,limit);
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& p) {
        int id=0;
        return build(p,id,INT_MAX);
    }
};
