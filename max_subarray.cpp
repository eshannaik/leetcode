// https://leetcode.com/problems/maximum-subarray/submissions/

class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int sum=nums[0],maxi=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            sum = max(nums[i],sum+nums[i]);
            maxi = max(maxi,sum);
            // cout << sum << " " << maxi << endl;
        }
        return maxi;
    }
};
