// https://leetcode.com/problems/number-of-islands/submissions/

class Solution {
public:
    void DFS(vector <vector<char>> &grid, int i, int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size())
            return;
        
        if(grid[i][j]=='2' || grid[i][j]=='0')
            return;
        
        grid[i][j]='2';
        
        DFS(grid,i-1,j);
        DFS(grid,i+1,j);
        DFS(grid,i,j-1);
        DFS(grid,i,j+1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int isLand=0;
        
        for(int i=0;i<grid.size();i++)
        {
            // cout << i << endl;
            for(int j=0;j<grid[i].size();j++)
            {
                // cout << i << j << endl;
                if(grid[i][j]=='1')
                {
                    // cout << "h" << endl;
                    DFS(grid,i,j);
                    isLand++;
                }
            }
        }
        return isLand;
    }
};
