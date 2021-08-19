// https://leetcode.com/problems/binary-tree-right-side-view/submissions/

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return {};
        queue <TreeNode*>q;
        q.push(root);
        int l;
        TreeNode* temp;
        vector<int>v,result;
        vector<vector<int>>res;
        while(!q.empty()){
            l=q.size();
            for(int i=0;i<l;i++){
                temp = q.front();
                q.pop();
                v.push_back(temp->val);
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            res.push_back(v);
            v.clear();
        }
        for(int i=0;i<res.size();i++){
            result.push_back(res[i][res[i].size()-1]);
        }
        return result;
    }
};
