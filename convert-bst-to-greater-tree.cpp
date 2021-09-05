// https://leetcode.com/problems/convert-bst-to-greater-tree/submissions/

class Solution {
public:
    int sum=0;
    
    void reverse_inorder(TreeNode* root){
        if(root==NULL)
            return;
        
        reverse_inorder(root->right);
        sum += root->val;
        // cout << root->val << " " << sum << endl;
        root->val = sum;
        reverse_inorder(root->left);
        
    }
    
    TreeNode* convertBST(TreeNode* root) {
        reverse_inorder(root);
        
        return root;
    }
};
