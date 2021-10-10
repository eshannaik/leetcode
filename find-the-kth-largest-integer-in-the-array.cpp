// https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/submissions/

class Solution {
public:
    struct comp
    {
        bool operator()(const string &a, const string &b)
        {
            return a.length()==b.length() ? (a>b) : a.length()>b.length();
        }    
    };
    
    string kthLargestNumber(vector<string>& nums, int k) {
        vector <int> v;
        priority_queue <string,vector<string>,comp> q;
        
        for(auto x:nums)
        {
            q.push(x);
            if(q.size()>k)
                q.pop();
        }
        
        return q.top();
    }
};
