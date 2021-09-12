// https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/submissions/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        // int total = 
        priority_queue <int> v;
            
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                v.push(matrix[i][j]);
        }
        
        while(v.size()!=k)
            v.pop();
        return v.top();
    }
};
