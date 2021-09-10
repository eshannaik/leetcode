// https://leetcode.com/problems/subsets/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector<int>> result;
        int n = nums.size();
        
        result.push_back({});
        
        for(int j=0;j<n;j++)
        {
            int sz = result.size();
            for(int i=0;i<sz;i++)
            {
                vector <int> temp = result[i];
                temp.push_back(nums[j]);
                result.push_back(temp);
            }
        }
        return result;
    }
};
