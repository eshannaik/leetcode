// https://leetcode.com/problems/unique-paths/

class Solution {
public:
    int uniquePaths(int m, int n) {
        int v[m][n];
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                // cout << i << j << endl;
                if(i==0 || j==0)
                    v[i][j]=1;
                else
                    v[i][j]=v[i-1][j]+v[i][j-1];
            }
        }
        return v[m-1][n-1];
    }
};
