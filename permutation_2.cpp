// https://leetcode.com/problems/permutations-ii/submissions/

class Solution {
public:
    vector <vector<int>>v;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        helper(nums,0,nums.size()-1);
        return v;
    }
    
    void helper(vector <int> n,int l,int r)
    {
        if(l==r)
        {
            if(count(v.begin(),v.end(),n)==0)
                v.push_back(n);
        }
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
