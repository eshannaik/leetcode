// https://leetcode.com/problems/find-if-path-exists-in-graph/

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        map <int,vector<int>>graph;
        for(auto x:edges){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        vector <int> visited(n,0);
        queue <int> q;
        // stack <int> st;
        // st.push(start);
        q.push(start);
        visited[start]=1;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            if(curr==end)
                return true;
            for(auto &x:graph[curr]){
                if(!visited[x]){
                    visited[x]=1;
                    q.push(x);
                }
            }
        }
        return false;
        // while(!st.empty()){
        //     auto top = st.top();
        //     if(top==end)
        //         return true;
        //     st.pop()
        //     for(auto &x:graph[top]){
        //         if(!visited[x]){
        //             visited[x]=1;
        //             q.push(x);
        //         }
        //     }
        // }
        // return false;
    }
};
