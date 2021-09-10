// https://leetcode.com/problems/majority-element/submissions/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int> res;
        int n=nums.size();
        
        for(auto x:nums)
        {
            if(res.find(x)==res.end())
                res[x]=1;
            else
                res[x]++;
        }
        for(auto x:res)
        {
            if(x.second>floor(n/2))
                return x.first;
        }
        return 0;
    }
};


// https://leetcode.com/problems/majority-element-ii/submissions/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map <int,int> res;
        int n=nums.size();
        vector <int> v;
        
        for(auto x:nums)
        {
            if(res.find(x)==res.end())
                res[x]=1;
            else
                res[x]++;
        }
        for(auto x:res)
        {
            if(x.second>floor(n/3))
                v.push_back(x.first);
        }
        return v;
    }
};
