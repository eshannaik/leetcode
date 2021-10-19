// https://leetcode.com/problems/next-greater-element-ii/submissions/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector <int> v;
        
        for(int i=0;i<n;i++)
        {
            int j= (i+1)%n;
            while(j!=i)
            {
                // cout << nums[j] << endl;
                if(nums[i]<nums[j])
                {
                    v.push_back(nums[j]);
                    break;
                }
                j++;
                j=j%n;
            }
            // cout << "HELLO" << endl;
            if(j==i)
                v.push_back(-1);
        }
        return v;
    }
};
