// https://leetcode.com/problems/top-k-frequent-words/submissions/

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map <string,int> res;
        int temp=0;
        string max;
        int j=0;
        vector<string>v;
        for(auto &i:words)
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
            j++;
        }
        return v;
    }
};
