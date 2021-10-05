// https://leetcode.com/problems/last-stone-weight/submissions/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        
        for(auto x:stones)
            q.push(x);
    
        while(q.size()>1)
        {
            int temp = q.top();
            q.pop();
            int temp1 = q.top();
            q.pop();
            
            q.push(temp-temp1);
        }
        return q.top();
    }
};
