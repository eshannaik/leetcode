// https://leetcode.com/problems/fibonacci-number/submissions/

class Solution {
public:
    int fib(int n) {
        vector <int> dp(n+1,0);
        if(n==0)
            return 0;
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        // if(n<=1)
        //     return n;
        // return fib(n-1)+fib(n-2);
    }
};
