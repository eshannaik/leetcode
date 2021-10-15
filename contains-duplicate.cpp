// https://leetcode.com/problems/contains-duplicate/submissions/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> res;
        
        for(auto x:nums)
        {
            if(res.find(x)==res.end())
                res[x]=1;
            else
                return true;
        }
        return false;
    }
};
