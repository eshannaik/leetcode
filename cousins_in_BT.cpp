// https://leetcode.com/problems/cousins-in-binary-tree/submissions/

class Solution {
public:
    int d1,d2;
    int p1,p2;
    
    bool traversal(TreeNode* root,int x,int y,int o,TreeNode* temp)
    {
        if(!root)
            return 0;
        
        if(x==root->val){
            d1=o;
            p1=temp->val;
        }
        if(y==root->val){
            d2=o;
            p2=temp->val;
        }
        
        traversal(root->left,x,y,o+1,root);
        traversal(root->right,x,y,o+1,root);
        
        if(d1==d2 && p1!=p2){
            return true;
        }
        return false;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        bool i = traversal(root,x,y,0,root);
        return i;
    }
};
