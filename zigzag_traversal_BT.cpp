// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/submissions/

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        queue <TreeNode*> q;
        q.push(root);
        vector<vector<int>> result;
        vector<int>v;
        TreeNode* temp;
        int c=0;
        int l;
        while(!q.empty())
        {
            l = q.size();
            for(int i=0;i<l;i++)
            {
                temp = q.front();
                q.pop();
                // cout << temp <<endl;
                v.push_back(temp->val);
                
                if(temp->right)
                    q.push(temp->right);
                if(temp->left)
                    q.push(temp->left);
            }
            c++;
            if(c%2 != 0)
                reverse(v.begin(),v.end());
            result.push_back(v);
            v.clear();
        }
        return result;
    }
};
