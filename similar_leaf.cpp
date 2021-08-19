// https://leetcode.com/problems/leaf-similar-trees/submissions/

class Solution {
public:
    vector<int> temp1;
    vector<int> temp2;
    void dfs(TreeNode* root,vector<int> &temp){
        if(!root)
            return;
        
        if(!root->left && !root->right){
            temp.push_back(root->val);
        }
        
        dfs(root->left,temp);
        dfs(root->right,temp);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs(root1,temp1);
        dfs(root2,temp2);
        
        if(temp1==temp2)
            return true;
        return false;
    }
};
