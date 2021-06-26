// https://leetcode.com/problems/pascals-triangle/submissions/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> v;
        for(int i=0;i<numRows;i++)
        {
            vector <int> temp(i+1,1);
            for(int j=1;j<i;j++)
            {
                temp[j] = v[i-1][j-1] + v[i-1][j];
            }
            v.push_back(temp);
        }
        return v;
    }
};

// https://leetcode.com/problems/pascals-triangle-ii/submissions/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <vector<int>> v;
        vector<int>res(rowIndex+1,-1);
        if(rowIndex==0)
        {
            res[0]=1;
            return res;
        }
        res[0]=1;
        res[1]=1;
        if(rowIndex==1)
            return res;
        for(int i=2;i<=rowIndex;i++)
        {
            res[i]=1;
            for(int j=i-1;j>0;j--)
            {
                res[j]=res[j]+res[j-1];
            }
        }
        return res;
    }
};
