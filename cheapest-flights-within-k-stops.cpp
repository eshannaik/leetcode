 // https://leetcode.com/problems/cheapest-flights-within-k-stops/submissions/

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        unordered_map <int,vector<pair<int,int>>> res;
        
        for(auto x:flights)
            res[x[0]].push_back({x[1],x[2]});
        
        priority_queue <vector<int>,vector<vector<int>>,greater<vector<int>>> q;
        q.push({0,src,0});
        
        vector <int> d(n+1,INT_MAX);
        
        while(!q.empty())
        {
            auto t=q.top();
            q.pop();
            
            int curr=t[1];
            int stop=t[2];
            int cost=t[0];

            if(curr==dst)
                return cost;
            
            if(d[curr]<stop)
                continue;
            d[curr]=stop;
            
            if(stop>k)
                continue;
                
            for(auto x:res[curr])
                q.push({cost+x.second,x.first,stop+1});
        }
        return -1;
    }
};
