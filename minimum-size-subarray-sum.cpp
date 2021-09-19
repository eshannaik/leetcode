// https://leetcode.com/problems/minimum-size-subarray-sum/submissions/

class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int sum =0;
        int temp =0;
        int mini = INT_MAX;
        int x=1;
        
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            if(sum>=k)
            {
                mini = i+1;
                break;
            }
        }
        
        sum=0;
        
        for(int i=1;i<nums.size();i++)
        {
            sum += nums[i];
            if(sum>=k)
            {
                sum =0;
                mini = min(mini,i-temp);
                i=x;
                temp=i;
                x++;
            }
        }
        if(mini==INT_MAX)
            return 0;
        return mini;
    }
};
