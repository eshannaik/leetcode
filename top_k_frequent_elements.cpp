// https://leetcode.com/problems/top-k-frequent-elements/submissions/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int,int> res;
        int temp=0,max=0;
        int j=0;
        vector<int>v;
        for(auto &i:nums)
        {
            if(res.find(i)==res.end())
                res[i]=1;
            else
                res[i]++;        
        }
        while(j<k)
        {
            for(auto x:res)
            {
                if(x.second>temp)
                {
                    max=x.first;
                    temp=x.second;
                }
            }
            res.erase(max);
            v.push_back(max);
            temp=0;
            max=0;
            j++;
        }
        return v;
    }
};
