// Part 1

// https://leetcode.com/problems/search-a-2d-matrix/submissions/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0,k=matrix[0].size()-1;
        while(i < matrix.size())
        {
            // cout << "heelo" << endl;
            if(matrix[i][j]<=target && target<=matrix[i][k])
            {
                int l=0;
                int r=matrix[i].size()-1;
                for(auto x:matrix[i])
                {
                    // cout << x << endl;
                    if(target>x)
                        continue;
                    if(x==target)
                        return true;
                }
                // while(l<=r)
                // {
                //     int mid = l+(r-l)/2;
                //     // cout << matrix[i][mid] << endl;
                //     if(matrix[i][mid]<target)
                //         l=mid+1;
                //     if(matrix[i][mid]>target)
                //         r=mid-1;
                //     else if(matrix[i][mid]==target)
                //         return true;
                // }
            }
            i++;
            j=0;
        }
        return false;
    }
};




// Part-2 

// https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0,k=matrix[0].size()-1;
        while(i < matrix.size())
        {
            // cout << "heelo" << endl;
            if(matrix[i][j]<=target && target<=matrix[i][k])
            {
                int l=0;
                int r=matrix[i].size()-1;
                while(l<=r)
                {
                    int mid = l+(r-l)/2;
                    // cout << matrix[i][mid] << endl;
                    if(matrix[i][mid]<target)
                        l=mid+1;
                    if(matrix[i][mid]>target)
                        r=mid-1;
                    else if(matrix[i][mid]==target)
                        return true;
                }
            }
            i++;
            j=0;
        }
        return false;
    }
};
