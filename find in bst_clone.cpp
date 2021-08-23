// https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/submissions/

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==target || original==NULL)
            return cloned;
        TreeNode * temp=getTargetCopy(original->left,cloned->left,target);
        if(temp)
            return temp;
        return getTargetCopy(original->right,cloned->right,target);
    }
};
