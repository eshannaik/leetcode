// https://leetcode.com/problems/minimum-falling-path-sum/submissions/

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix.size();
        
        int dp[101][101]={0};
        
        for(int i=0;i<m;i++)
            dp[0][i]=matrix[0][i];
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(j!=0 && j!=m-1)
                    dp[i][j]=matrix[i][j] + min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]));
                
                if(j==0)
                    dp[i][j]=matrix[i][j] + min(dp[i-1][j],dp[i-1][j+1]);
                
                if(j==m-1)
                    dp[i][j]=matrix[i][j] + min(dp[i-1][j-1],(dp[i-1][j]));
            }
        }
        
        int ans = INT_MAX;
        
        for(int i=0;i<m;i++)
            ans = min(dp[n-1][i],ans);
        
        return ans;
    }
};
