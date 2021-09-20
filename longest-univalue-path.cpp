// https://leetcode.com/problems/longest-univalue-path/submissions/

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
    int ans=0;
    int findPath(TreeNode* root,int prev)
    {
        if(!root)
            return 0;
        
        int l=findPath(root->left,root->val);
        int r=findPath(root->right,root->val);
        ans = max(ans,r+l);
        
        if(prev==root->val)
            return max(r,l)+1;
        return 0;
    }
    
    int longestUnivaluePath(TreeNode* root) {
        if(!root)
            return 0;
        findPath(root,root->val);
        return ans;
    }
};
