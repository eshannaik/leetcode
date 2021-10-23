// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/submissions/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int temp;
        while(i<j)
        {
            int m=i + (j-i)/2;
            // cout << nums[m] << nums[i] << nums[j] << endl;
            if(nums[m]>nums[j])
                i=m+1;
            else if(nums[m]<nums[i]){
                j=m;
                i++;
            }
            else
                j--;
            // cout << nums[m] << nums[i] << nums[j] << endl;
        }
        return nums[i];
    }
};
