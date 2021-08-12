// https://leetcode.com/problems/third-maximum-number/submissions/

class Solution {
public:
    // vector <int> sort(vector <int>& nums){
    //     for(int i=0;i<nums.size()-1;i++)
    //     {
    //         for(int j=i+1;j<nums.size();j++)
    //         {
    //             int temp;
    //             if(nums[i]>nums[j])
    //             {
    //                 temp=nums[i];
    //                 nums[i]=nums[j];
    //                 nums[j]=temp;
    //             }
    //         }
    //     }
    //     return nums;
    // }
    
    int thirdMax(vector<int>& nums) {
        // sort (nums);
        sort(nums.begin(),nums.end(),greater <> ());
        vector <int> res;
        
        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        
        if(nums.size()>=3)
            return nums[2];
        else
            return nums[0];
    }
    
};
