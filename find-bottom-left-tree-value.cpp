// https://leetcode.com/problems/find-bottom-left-tree-value/submissions/

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
    int findBottomLeftValue(TreeNode* root) {
        queue <TreeNode*> q;
        q.push(root);
        vector <int> v;
        
        while(!q.empty())
        {
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                
                if(i==0)
                    v.push_back(temp->val);
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        return v[v.size()-1];
    }
};
