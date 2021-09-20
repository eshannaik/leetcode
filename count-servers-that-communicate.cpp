// https://leetcode.com/problems/count-servers-that-communicate/submissions/

class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int row,int col,int &c)
    {
        if(grid[i][j]==1)
        {
            c++;
            grid[i][j]=2;
            for(int k=0;k<row;k++)
            {
                // cout << k << j << endl;
                if(grid[k][j]==1)
                    dfs(grid,k,j,row,col,c);
                // cout << c << endl;
            }
            for(int k=0;k<col;k++)
            {
                // cout << j << k << endl;
                if(grid[i][k]==1)
                    dfs(grid,i,k,row,col,c);
            }
            // cout << "HELLO" << endl;
        }
        return;
        
    }
    int countServers(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        // int c=0;
        int sum=0;
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    int c=0;
                    // cout << i << j << endl;
                    dfs(grid,i,j,row,col,c);
                    // cout << c << endl;
                    if(c>1)
                        sum += c;
                }
            }
        }
        
        return sum;
    }
};
