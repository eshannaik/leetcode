// https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/submissions/

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector <int> res;
        
        sort(nums.begin(),nums.end());
        int sum = accumulate(nums.begin(),nums.end(),0);
        int newsum=0;
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            newsum += nums[i];
            sum -= nums[i];
            res.push_back(nums[i]);
            if(newsum>sum)
                break;
        }
        
        return res;
    }
};
