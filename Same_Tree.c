// https://leetcode.com/problems/same-tree/

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    
    if(p==NULL&&q==NULL)
    {
        return true;
    }
    else if(p!=NULL&&q==NULL)
    {
        return false;
    }
    else if(p==NULL&&q!=NULL)
    {
        return false;
    }
    return (p->val==q->val&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));
}
