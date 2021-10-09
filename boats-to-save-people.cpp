// https://leetcode.com/problems/boats-to-save-people/submissions/

class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int j=n-1;
        int c=0;
        
        while(i<=j)
        {
            if(i==j)
            {
                c++;
                break;
            }
            else if(nums[i]+nums[j]<=limit)
            {
                c++;
                i++;
                j--;
            }
            else if(nums[i]+nums[j]>limit)
            {
                c++;
                j--;
            }
        }
        return c;
    }
};
