// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/submissions/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end()))
            return 0;
        
        int n =nums.size();
        int i=0;
        int temp=0,temp1=0;
        
        vector <int> v=nums;
        sort(v.begin(),v.end());
        
        while(i<n)
        {
            if(nums[i]==v[i])
                i++;
            else
            {
                temp=i;
                break;
            }
        }
        i = temp+1;
        
        while(i<n)
        {
            if(nums[i]==v[i])
                i++;
            else
            {
                temp1=i;
                i++;
            }
        }
        return temp1-temp+1;
    }
};
