// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/submissions/

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
    int maxLevelSum(TreeNode* root) {
        TreeNode* temp;
        queue <TreeNode*> q;
        q.push(root);
        int sum=0,maxx=INT_MIN;
        int i=0;
        int result;
        while(!q.empty())
        {
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                temp = q.front();
                q.pop();
                sum += temp->val;
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            i++;
            // cout << sum << endl;
            if(maxx<sum)
            {
                maxx= sum;
                result=i;
            }
            // maxx = max(maxx,sum);
            sum=0;
        }
        return result;
    }
};
