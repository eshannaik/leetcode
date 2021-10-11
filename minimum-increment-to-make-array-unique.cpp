// https://leetcode.com/problems/minimum-increment-to-make-array-unique/submissions/

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int c=0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]<=nums[i])
            {
                c += (nums[i]+1)-nums[i+1];
                nums[i+1] = nums[i]+1;
            }
        }
        return c;
    }
};
