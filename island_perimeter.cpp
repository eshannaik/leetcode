// https://leetcode.com/problems/island-perimeter/submissions/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int p=0;
        int n=grid.size();
        for(int i=0;i<n;i++)
        {
            int m=grid[i].size();
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    p+=4;
                    
                    if(i-1>=0 && grid[i-1][j]==1)
                        p--;
                    if(i+1<n && grid[i+1][j]==1)
                        p--;
                    if(j-1>=0 && grid[i][j-1]==1)
                        p--;
                    if(j+1<m && grid[i][j+1]==1)
                        p--;
                }
            }
        }
        return p;
    }
};
