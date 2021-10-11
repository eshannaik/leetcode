// https://leetcode.com/problems/find-k-closest-elements/submissions/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>res;

        priority_queue <pair<int,int>> q;
        
        for(auto i:arr)
        {
            q.push(make_pair(abs(i-x),i));
            if(q.size()>k)
                q.pop();
        }
        
        while(!q.empty())
        {
            res.push_back(q.top().second);
            q.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};
