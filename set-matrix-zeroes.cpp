// https://leetcode.com/problems/set-matrix-zeroes/submissions/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector <bool> row(matrix[0].size(),false);
        vector <bool> col(matrix.size(),false);
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    // cout << i<< j << endl;
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(row[i]==true || col[j]==true)
                {
                    // cout << i << j << endl;
                    matrix[i][j]=0;
                }
            }
        }
    }
};
