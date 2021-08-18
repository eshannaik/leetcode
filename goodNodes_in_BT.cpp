// https://leetcode.com/problems/count-good-nodes-in-binary-tree/submissions/

class Solution {
public:
    int traversal(TreeNode* root,int maxVal){
        if(!root)
            return 0;
        
        int c=0;
        if(root->val >= maxVal){
            maxVal = root->val;
            c++;
        }
        
        return c + traversal(root->left,maxVal) + traversal(root->right,maxVal);
    }
    
    int goodNodes(TreeNode* root) {
        int c = traversal(root,root->val);
        return c;
    }
};
