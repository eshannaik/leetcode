// https://leetcode.com/problems/longest-consecutive-sequence/submissions/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector <int> v;
        int maxx=0;
        int c=0;
        if(nums.size()<=1)
            return nums.size();
        
        for(auto x:nums)
            v.insert(lower_bound(v.begin(),v.end(),x),x);
        
        // for(auto x:v)
        //     cout << x<< endl;
        
        for(int i=0;i<v.size()-1;i++)
        {
            // cout << v[i] << endl;
            if(v[i+1]-v[i]==1)
                c++;
            else if(v[i+1]-v[i]>1)
                c=0;
            // cout << c << endl;
            maxx =max(maxx,c+1);
            
        }
        return maxx;
    }
};
