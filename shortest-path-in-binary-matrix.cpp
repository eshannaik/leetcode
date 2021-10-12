// https://leetcode.com/problems/shortest-path-in-binary-matrix/submissions/

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        
        if(grid[0][0]==1)
            return -1;
        
        if(grid[n-1][n-1]==1)
            return -1;
        
        queue<pair<int,int>> q;
        int count = 1;
        q.push({0,0});
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
                pair<int,int> p = q.front();
                q.pop();

                if(p.first==n-1 and p.second==n-1){
                    return count;
                }
                int r = p.first;
                int c = p.second;

                if(r+1 < n and grid[r+1][c]==0){
                    q.push({r+1,c});
                    grid[r+1][c] =1 ;
                }

                if(c+1 < n and grid[r][c+1]==0){
                    q.push({r,c+1});
                     grid[r][c+1] =1 ;
                }

                if(r+1<n and  c+1 < n and grid[r+1][c+1]==0){
                    q.push({r+1,c+1});
                    grid[r+1][c+1] =1 ;
                }

                if(r-1 >=0 and grid[r-1][c]==0){
                    q.push({r-1,c});
                     grid[r-1][c] =1 ;
                }

                if(c-1 >=0 and grid[r][c-1]==0){
                    q.push({r,c-1});
                     grid[r][c-1] =1 ;
                }

                if(c-1 >=0 and r-1>=0 and grid[r-1][c-1]==0){
                    q.push({r-1,c-1});
                     grid[r-1][c-1] =1 ;
                }

                if(c-1 >=0 and r+1<n and grid[r+1][c-1]==0){
                    q.push({r+1,c-1});
                     grid[r+1][c-1] =1 ;
                }

                if(c+1 <n and r-1>=0 and grid[r-1][c+1]==0){
                    q.push({r-1,c+1});
                    grid[r-1][c] =1 ;
                }
            }
            count++;
        }
        return -1;
    }
};
