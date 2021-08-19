// https://leetcode.com/problems/all-elements-in-two-binary-search-trees/submissions/

class Solution {
public:
    void traversal(TreeNode* root,vector <int> &v)
    {
        if(!root)
            return;
        traversal(root->left,v);
        v.push_back(root->val);
        traversal(root->right,v);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> temp1;
        vector <int> temp2;
        traversal(root1,temp1);
        traversal(root2,temp2);
        for(auto x:temp2)
            temp1.push_back(x);
        sort(temp1.begin(),temp1.end());
        return temp1;
    }
};
