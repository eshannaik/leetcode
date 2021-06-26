// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/

class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums[0];
        int i=0;
        int j=nums.size()-1,m;
        while(nums[i]>nums[j])
        {
            m=(i+j)/2;
            if(nums[m]>nums[i])
                i=m;
            else if (nums[m]<nums[i])
                j=m;
            else
                return nums[j];
        }
        return nums[i];
    }
};

