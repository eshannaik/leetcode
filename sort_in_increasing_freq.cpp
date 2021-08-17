// https://leetcode.com/problems/sort-array-by-increasing-frequency/submissions/

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map <int,int> res;
        int min=100000;
        int temp;
        int z=0;
        vector <int> v;
        int u = 0;
        for(auto x:nums)
        {
            if(res.find(x)==res.end())
            {
                res[x]=1;
                u++;
            }
            else
                res[x]++;
        }
        while(z<u)
        {
            for(auto x :res)
            {
                if(x.second<=min)
                {
                    min = x.second;
                    temp = x.first;
                }
            }
            for(int i=0;i<min;i++)
                v.push_back(temp);
            res.erase(temp);
            z++;
            min=100000;
        }
        return v;
    }
};
