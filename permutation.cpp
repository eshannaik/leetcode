// https://leetcode.com/problems/permutations/submissions/

class Solution {
public:
    vector <vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0,nums.size()-1);
        return res;
    }
    void helper(vector<int> n,int l,int r)
    {
        if(l==r)
            res.push_back(n);
        else
        {
            for(int i=l;i<=r;i++)
            {
                swap(n[l],n[i]);
                helper(n,l+1,r);
                swap(n[l],n[i]);
            }
        }
    }
};
