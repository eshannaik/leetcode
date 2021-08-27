// https://leetcode.com/problems/house-robber-ii/submissions/

class Solution {
public:
    int money(vector <int> v)
    {
        int n=v.size();
        // cout << n <<endl;
        vector<int>dp(n+1,0);
        dp[1]=v[0];
        for(int i=2;i<=n;i++)
        {
            // cout << v[i-1] << endl;
            dp[i] = max(dp[i-1],dp[i-2]+v[i-1]);
        }
        return dp[n];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        vector<int>v1(nums.begin()+1,nums.end());
        vector <int> v2(nums.begin(),nums.end()-1);
        int max_money = max(money(v1),money(v2));
        return max_money;
    }
};
