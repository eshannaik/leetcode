// https://leetcode.com/problems/count-sub-islands/submissions/

class Solution {
public:
    bool res;
    void dfs (vector<vector<int>>& grid1,vector<vector<int>>& grid2,int row,int col,int i,int j)
    {
        if(i<0 || j<0 || i==row || j==col || grid2[i][j]!=1)
            return;
        
        if(grid1[i][j]==0)
        {
            res=false;
            return;
        }
        
        grid2[i][j] = 2;
        
        dfs(grid1,grid2,row,col,i-1,j);
        dfs(grid1,grid2,row,col,i+1,j);
        dfs(grid1,grid2,row,col,i,j-1);
        dfs(grid1,grid2,row,col,i,j+1);
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int rows = grid1.size();
        int cols = grid1[0].size();
        int c=0;
            
        for (int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid2[i][j]==1)
                {
                    res=true;
                    dfs(grid1,grid2,rows,cols,i,j);
                    if (res)
                        c++;
                }
            }
        }
        return c;
    }
};
