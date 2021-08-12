// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // for(auto x:nums)
        // {
        //     if(x==target)
        //         return true;
        // }
        // return false;
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size();
        while(low<high)
        {
            int mid = (low+high)/2;
            cout << mid <<endl;
            if(target>nums[mid])
                low=mid+1;
            else if(target<nums[mid])
                high=mid;
            else if(target==nums[mid])
                return true;
            cout << mid <<endl;
        }
        return false;
    }
};
