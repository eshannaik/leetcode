// https://leetcode.com/problems/find-largest-value-in-each-tree-row/submissions/

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(!root)
            return {};
        vector<vector<int>>res;
        vector<int>v,result;
        queue <TreeNode*> q;
        q.push(root);
        TreeNode* temp;
        int l;
        int max=INT_MIN;
        while(!q.empty()){
            l=q.size();
            for(int i=0;i<l;i++){
                temp=q.front();
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
            for(auto x:res[i]){
                // cout << x <<endl;
                if(x>max)
                    max=x;
            }
            result.push_back(max);
            max=INT_MIN;
        }
        return result;
    }
};
