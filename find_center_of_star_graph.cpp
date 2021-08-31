// https://leetcode.com/problems/find-center-of-star-graph/submissions/

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        vector <int> res(n+2,0);
        
        for(int i=0;i<n;i++)
        {
            res[edges[i][0]]++;
            res[edges[i][1]]++;
            
            if(res[edges[i][0]]==n)
                return edges[i][0];
            if(res[edges[i][1]]==n)
                return edges[i][1];
        }
        return 0;
    }
};
