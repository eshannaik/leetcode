// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=0;j<nums.size()-i-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
    }
};

class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector <int> v;
        
        for(auto x:nums)
            v.insert(lower_bound(v.begin(),v.end(),x),x);
        
        for(int i=0;i<v.size();i++)
            nums[i]=v[i];
    }
};
