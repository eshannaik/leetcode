// https://leetcode.com/problems/max-number-of-k-sum-pairs/submissions/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map <int,int> res;
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            if(res[k-nums[i]]>0)
            {
                res[k-nums[i]]--;
                c++;
            }
            else
                res[nums[i]]++;
        }
        return c;
    }
};
