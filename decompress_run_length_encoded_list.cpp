// https://leetcode.com/problems/decompress-run-length-encoded-list/submissions/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> v;
        int n=nums.size();
        for(int i=0;i<n-1;i+=2)
        {
            for(int j=0;j<nums[i];j++)
                v.push_back(nums[i+1]);
        }
        return v;
    }
};
