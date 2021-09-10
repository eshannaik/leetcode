// https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
        }
        
        int i=0;
        for(auto x:nums)
        {
            if(maxi==x)
                return i;
            i++;
        }

        
        return 0;
    }
};
