// https://leetcode.com/problems/unique-paths-ii/submissions/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        
        vector <vector <int>> dp(n+1,vector<int> (m+1,0));
        dp[0][1]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
//                 if((i==0 || j==0) && obstacleGrid[i][j]!=1)
//                     dp[i][j]=1;
                
//                 else if(obstacleGrid[i][j]==1)
//                     dp[i][j]=0;
                
//                 else if(obstacleGrid[i][j]==0)
//                     dp[i][j]=dp[i-1][j]+dp[i][j-1];
                
                if(!obstacleGrid[i-1][j-1])
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[n][m];
    }
};
