// https://leetcode.com/problems/sum-of-left-leaves/submissions/

class Solution {
public:
    int sum=0;
    int traversal(TreeNode* root,bool x)
    {
        if(root==NULL)
            return NULL;
        traversal(root->right,false);
        traversal(root->left,true);
        
        if(root->left == NULL && root->right == NULL && x==true)
            sum += root->val;
        
        return sum;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        traversal(root,false);
        return sum;
    }
};
