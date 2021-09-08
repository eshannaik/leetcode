// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h=nums.size()-1;
        int l=0;
        while(l<=h)
        {
            int mid = (l+h)/2;
            // cout << nums[mid] << endl;
            if(nums[mid]==target)
                return mid;
            
            else if (nums[l]<=nums[mid])
            {
                if(nums[l]<=target && target<nums[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
            
            else
            {
                if(nums[h]>=target && target>nums[mid])
                    l=mid+1;
                else
                    h=mid-1;
            }
        }
        return -1;
    }
};
