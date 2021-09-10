// https://leetcode.com/problems/product-of-array-except-self/submissions/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> v;
        int p=1;
        for(auto x:nums)
            p *=x;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                int temp=1;
                for(int j=0;j<n;j++)
                {
                    if(j!=i)
                        temp *= nums[j];
                }
                v.push_back(temp);
            }
            else
                v.push_back(p/nums[i]);
        }
        return v;
    }
};
