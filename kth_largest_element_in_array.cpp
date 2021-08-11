//https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/

class Solution {
public:
    vector <int> sort(vector <int>& nums){
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int temp;
                if(nums[i]<nums[j])
                {
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        return nums;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        map <int,int> res;
        vector<int>v;
        sort(nums);
        // sort(nums.begin(),nums.end(),greater<>());
        return nums[k-1];
    }
};
