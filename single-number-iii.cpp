// https://leetcode.com/problems/single-number-iii/submissions/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map <int,int> res;
        vector <int> v;
        
        for(auto x:nums)
            res[x]++;
        
        for(auto x:res)
        {
            if(x.second==1)
                v.push_back(x.first);
        }
        return v;
    }
};
