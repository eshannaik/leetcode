// https://leetcode.com/problems/maximum-number-of-non-overlapping-subarrays-with-sum-equals-target/submissions/

class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        map <int,int> res;
        int c=0,sum=0;
        int e=-1;
        res[0]=-1;

        for(int i=0;i<nums.size();i++)
        {
            sum +=nums[i];
            if(res.find(sum-target)!=res.end() && res[sum-target]>=e)
            {
                c++;
                e=i;
            }
            else
                res[sum]=i;
        }
        return c;
    }
};
