// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector <int> v,result;
        map <int,int> res;
        int n=0;
        int min=INT_MAX;
        int temp;
        for(int i=0;i<mat.size();i++)
        {
            res[i]=count(mat[i].begin(),mat[i].end(),1);
        }
        while(n<mat.size())
        {
            for(auto x:res)
            {
                // cout << x.first << endl;
                if(x.second<min)
                {
                    min=x.second;
                    temp=x.first;
                }
            }
            // cout << temp << endl;
            v.push_back(temp);
            res.erase(temp);
            min=INT_MAX;
            n++;
        }
        for(int i=0;i<k;i++)
        {
            result.push_back(v[i]);
        }
        return result;
    }
};
