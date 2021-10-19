// https://leetcode.com/problems/next-greater-element-i/submissions/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int>v;
        
        for(auto x:nums1)
        {
            auto it = find(nums2.begin(),nums2.end(),x);
            auto j=it;
            for(j=it;j!=nums2.end();j++)
            {
                // cout << x << *j << endl;
                if(x<*j)
                {
                    v.push_back(*j);
                    break;
                }
            }
            if(j==nums2.end())
                v.push_back(-1);
        }
        return v;
    }
};
