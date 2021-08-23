// https://leetcode.com/problems/delete-leaves-with-a-given-value/submissions/

class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root==NULL)
            return NULL;
        
        root->left = removeLeafNodes(root->left,target);
        root->right = removeLeafNodes(root->right,target);
        
        if(root->left==NULL && root->right==NULL && root->val==target){
            return NULL;
        }
        
        return root;
    }
};
