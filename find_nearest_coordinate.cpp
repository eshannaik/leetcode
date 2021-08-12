// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/submissions/

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int min=10000000;
        int temp=-1;
        for(int i=0;i<points.size();i++)
        {
            if(x==points[i][0] || y==points[i][1])
            { 
                int x_d = abs(x - points[i][0]); 
                int y_d = abs(y - points[i][1]); 
                // cout << x_d << ' ' <<  y_d << endl;
                int d = x_d + y_d;
                if(d<min)
                {
                    min = d;
                    temp = i;
                }
            }
        }
        return temp;
    }
};
