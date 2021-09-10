// https://leetcode.com/problems/find-the-duplicate-number/submissions/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map <int,int> res;
        // for(auto x:nums)
        // {
        //     if(res.find(x)==res.end())
        //         res[x]=1;
        //     else
        //         return x;
        // }
        // return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return 0;
    }
};
