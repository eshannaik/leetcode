// https://leetcode.com/problems/maximum-width-of-binary-tree/submissions/

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
    int widthOfBinaryTree(TreeNode* root) {
        queue <pair <TreeNode*,unsigned long long>> q;
        q.push({root,1});
        unsigned long long result=0;
        
        if(root==NULL)
            return result;
        
        while(!q.empty())
        {
            int l=q.size();;
            unsigned long long diff = q.front().second;
            unsigned long long r=diff;
            
            for(int i=0;i<l;i++)
            {
                TreeNode* temp = q.front().first;
                r = q.front().second;
                q.pop();
                
                if(temp->left)
                    q.push({temp->left,2*r});
                if(temp->right)
                    q.push({temp->right,r*2+1});
            }
            result = max(result,r+1-diff);
        }
        return result;
    }
};
