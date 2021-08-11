// https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/submissions/

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int temp,j=0;
        while(j<nums.size())
        {
            if(nums[j]==1)
            {
                temp=j;
                break;
            }  
            j++;
        }
        for(int i=temp+1;i<nums.size();i++)
        {
            if(nums[i]==1){
                int x=i-temp-1;
                // cout<<x<<endl;
                if(x<k)
                    return false;
                temp=i;
            }
        }
        return true;
    }
};
