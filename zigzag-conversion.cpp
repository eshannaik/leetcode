// https://leetcode.com/problems/zigzag-conversion/submissions/

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1)
            return s;
        int n=s.size();
        vector <string> res(numRows,"");
        for(int i=0,row=0,step=1;i<n;i++)
        {
            res[row]+=s[i];
            if(row==0)
                step=1;
            if(row==numRows-1)
                step=-1;
            row +=step;
        }
        string w;
        
        for(auto x:res)
            w += x;
        
        return w;
    }
};
