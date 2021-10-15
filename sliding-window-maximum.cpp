// https://leetcode.com/problems/sliding-window-maximum/submissions/
 
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector <int> v;
        int maxx=INT_MIN;
        priority_queue <pair<int,int>> temp;
        
        if(nums.size()==1 && k==1)
        {
            v.push_back(nums[0]);
            return v;
        }
        
        for(int i=0;i<k;i++)
            temp.push(make_pair(nums[i],i));

        v.push_back(temp.top().first);
        
        for(int i=k;i<=nums.size()-1;i++)
        {
            while(!temp.empty() && temp.top().second <= i-k)
                temp.pop();
            temp.push(make_pair(nums[i],i));
            
            v.push_back(temp.top().first);
        }
        
        return v;
    }
};
