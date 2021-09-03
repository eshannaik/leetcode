// https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // map <int,int> res;
        vector <int> res(nums.size()+1,0);
        vector <int> v;
        int i=0;
        for(auto x:nums)
        {
            // if(res.find(x)==res.end())
            //     res[x]=1;
            // else
            //     res[x]++;
            res[x]++;
        }
        for(auto x:res)
        {
            // if(x.second>1)
            //     v.push_back(x.first);
            if(x>1)
                v.push_back(i);
            i++;
        }
        return v;
    }
};
