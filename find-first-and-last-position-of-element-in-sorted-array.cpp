// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v;
        int i=0,j=nums.size()-1;
        int temp;
        
        if(nums.size()==0)
        {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        
        while(i<nums.size())
        {
            if(nums[i]==target)
            {
                temp=i;
                break;
            }
            i++;
        }

        if(i==j+1)
        {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        else
            v.push_back(i);
        
        temp=i;
        int temp1=temp;
        i++;

        while(i<=j)
        {
            int mid = (i + j)/2;
            // cout << nums[mid]<< endl;
            if(nums[mid] == target)
            {
               temp1=mid;
               i = mid + 1;
            }
            else if(nums[mid] < target)
                i = mid + 1;
            else
                j = mid - 1;
        }
        v.push_back(temp1);
        
        return v;
    }
};
