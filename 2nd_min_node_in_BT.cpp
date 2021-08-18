// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/submissions/

class Solution {
public:
    vector<int> v;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        sort(v.begin(),v.end());
        v.erase(std::unique(v.begin(), v.end()), v.end());
        if(v.size()==1)
            return -1;
        return v[1];
    }
};
