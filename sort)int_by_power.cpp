// https://leetcode.com/problems/sort-integers-by-the-power-value/submissions/

class Solution {
public:
    int getKth(int lo, int hi, int k) {
        int c=0;
        unordered_map <int,int> temp;
        priority_queue <pair<int,int>>q;
        vector<int>v;
        for(int i=lo;i<=hi;i++)
        {
            int r = i;
            while(r!=1)
            {
                if(r%2==0)
                    r /= 2;
                else
                    r = 3 * r + 1;
                c++;
            }
            q.push({c,i});
            if(q.size()>k)
                q.pop();
            c=0;
        }
        return q.top().second;
    }
};
