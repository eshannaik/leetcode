// https://leetcode.com/problems/same-tree/

//cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> h;
        int num1,num2;
        for(int i=0;i<nums.size();i++)
        {
            h.insert({nums[i],i});
        }
        for(int i=0;i<nums.size();i++)
        {
            auto it = h.find(target-nums[i]);
            if(it != h.end())
            {
                num1 = it -> second;
                num2 = i;
            }
        }
        return {num1,num2};
    }
};

//c
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
