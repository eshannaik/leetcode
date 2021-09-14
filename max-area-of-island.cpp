// https://leetcode.com/problems/max-area-of-island/submissions/

class Solution {
public:
    int c=0;
    int DFS(vector <vector<int>> &grid, int i, int j)
    {
        // cout << c << endl;
        if(i<0 || i==grid.size() || j<0 || j==grid[i].size())
            return c;

        if(grid[i][j]==2 || grid[i][j]==0)
            return c;
        
        if(grid[i][j]==1)
            c=c+1;

        grid[i][j]=2;
        
        DFS(grid,i-1,j);
        DFS(grid,i+1,j);
        DFS(grid,i,j-1);
        DFS(grid,i,j+1);
        // cout << c << endl;
        return c;
    }

    int maxAreaOfIsland(vector<vector<int>>& board) {
        int temp;
        int max=0;
        
        for(int i=0;i<board.size();i++)
        {
            // cout << i << endl;
            for(int j=0;j<board[i].size();j++)
            {
                // cout << i << j << endl;
                if(board[i][j]==1)
                {
                    // cout << "h" << endl;
                    temp = DFS(board,i,j);
                    // cout << temp << i << j << endl;
                    if(temp>max)
                        max=temp;
                    c=0;
                }
 
            }
        }
        return max;
    }
};
