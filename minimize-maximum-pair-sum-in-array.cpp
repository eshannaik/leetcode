// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/submissions/

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size();
        int ans=INT_MIN;
        
        for(int j=n-1;j>=n/2;j--)
        {
            ans = max(ans,nums[i]+nums[j]);
            i++;
        }
        return ans;
    }
};
