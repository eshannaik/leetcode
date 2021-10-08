// https://leetcode.com/problems/longest-increasing-subsequence/submissions/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxx=0;
        int c=0;
        
        vector<int> dp(n,1);
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                    dp[i] = max(dp[i],1+dp[j]);
            }
            // cout << dp[i] << endl;
        }
        return *max_element(dp.begin(),dp.end());
    }
};
