// https://leetcode.com/problems/maximum-product-subarray/submissions/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0],mini=nums[0],r=nums[0];
        
        if(nums.size()==0)
            return 0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                int temp = maxi;
                maxi=mini;
                mini=temp;
            }
            maxi = max(nums[i],nums[i]*maxi);
            // cout << nums[i] << nums[i]*mini << endl;
            mini = min(nums[i],nums[i]*mini);
            r=max(r,maxi);
            // cout << maxi << mini << endl;
        }
        return r;
    }
};
