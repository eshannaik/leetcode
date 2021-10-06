// https://leetcode.com/problems/single-number-ii/submissions/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> res;
        
        for(auto x:nums)
            res[x]++;
        
        for(auto x:res)
        {
            if(x.second!=3)
                return x.first;
        }
        return 1;
    }
};
