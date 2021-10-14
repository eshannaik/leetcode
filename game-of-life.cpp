// https://leetcode.com/problems/game-of-life/submissions/

class Solution {
public:
    int dRow[8] = {0,1,0,-1,-1,1,-1,1};
    int dCol[8] = {-1,0,1,0,-1,-1,1,1};
    
    int around(vector<vector<int>>& res,int i,int j,int n,int m)
    {
        int c=0;
        for(int k=0;k<8;k++)
        {
            if (i+dRow[k]>=0 && i+dRow[k]<n && j+dCol[k]>=0 && j+dCol[k]<m)
            {
                // cout << i+dRow[k] << j+dCol[k] << board[i+dRow[k]][j+dCol[k]] << endl;
                if(res[i+dRow[k]][j+dCol[k]]==1)
                    c++;
            }
        }
        // cout << "HELLO" << endl;
        // cout << i << j << c << endl;
        // cout << i << j << c << endl;
        // if(c==0 && board[i][j]==0)
        return c;
        
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector <vector<int>> res=board;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int temp = around(res,i,j,n,m);
                if(board[i][j]==0)
                {
                    if(temp==3)
                        board[i][j]=1;
                }
                if(board[i][j]==1)
                {
                    if(temp<2 || temp>3)
                        board[i][j]=0;
                }
            }
        }
    }
};
