// https://leetcode.com/problems/word-search/submissions/

class Solution {
public:
    int dRow[4] = { 0, 1, 0, -1 };
    int dCol[4] = { -1, 0, 1, 0 };
    
    int dfs(vector<vector<char>>& board,int i,int j,string& word)
    {
        if(!word.size()) 
            return true;
        if(i < 0 || i == board.size() || j < 0 || j == board[0].size() || board[i][j] != word[0])
            return false;
        
        char ch = board[i][j];
        board[i][j]='*';
        string s = word.substr(1);
        // cout << word << " " << s <<" "<< ch << endl;
        bool res = dfs(board, i-1, j, s) || dfs(board, i+1, j, s) || dfs(board, i, j-1, s) || dfs(board, i, j+1, s);
        board[i][j]=ch;
        
        return res;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // cout << board[i][j] << endl;
                if(dfs(board,i,j,word))
                    return true;
            }
        }
        return false;
    }
};
