// https://leetcode.com/problems/path-sum/

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;
        if(!root->left && !root->right && root->val==targetSum)
            return true;
        return hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val);
    }
};

// https://leetcode.com/problems/path-sum-ii/

class Solution {
public:
    void inorder(TreeNode* root,vector <int> &v){
        if(root==NULL)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector <int> v;
        inorder(root,v);
        sort(v.begin(),v.end());
        int l=0,r=v.size()-1;
        while(l<r)
        {
            int sum = v[l]+v[r];
            if(sum<k)
                l++;
            if(sum>k)
                r--;
            if(sum==k)
                return true;
        }
        return false;
    }
};
