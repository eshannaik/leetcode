// https://leetcode.com/problems/get-maximum-in-generated-array/submissions/

class Solution {
public:
    int getMaximumGenerated(int n) {
        vector <int> dp(n+2,0);
        vector <int> v(n+1,0);
        if(n==0)
            return 0;
        dp[0]=0;
        dp[1]=1;
        v[0]=0;
        v[1]=1;
        for(int i=1;i<=n/2;i++)
        {
            dp[2*i]=dp[i];
            if(2*i+1<=n)
                dp[2*i+1]=dp[i]+dp[i+1];
            v.push_back(dp[2*i]);
            v.push_back(dp[2*i+1]);
        }
        return *max_element(v.begin(),v.end());
    }
};
