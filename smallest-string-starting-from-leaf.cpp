// https://leetcode.com/problems/smallest-string-starting-from-leaf/submissions/

class Solution {
public:
    string answer="~";
    void helper(TreeNode* root,string s)
    {
        if(!root)
            return ;
        if(!root->left && !root->right)
            answer = min(answer,char(root->val+'a')+s);
        
        helper(root->left,char(root->val+'a')+s);
        helper(root->right,char(root->val+'a')+s);
    }
    string smallestFromLeaf(TreeNode* root) {
        helper(root,"");
        return answer;
    }
};
