// https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/submissions/

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map <int,int> q;
        vector <int> v;
        
        for(auto x:arr)
        {
            if(q.find(x)==q.end())
                q[x]=1;
            else
                q[x]++;
        }
        
        for(auto x: q)
            v.push_back(x.second);
        
        sort(v.begin(),v.end());
        
        int x=0;
        
        for(int i=0;i<v.size();i++)
        {
            if(k>=v[i])
            {
                k-=v[i];
                x++;
            }
            else
                break;
        }
        
        return v.size()-x;
    }
};
