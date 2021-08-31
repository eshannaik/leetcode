// https://leetcode.com/submissions/detail/547335134/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited (rooms.size(),false);
        queue <int> q;
        q.push(0);
        int temp;
        while(!q.empty())
        {
            temp = q.front();
            q.pop();
            visited[temp]=true;
            for(auto x:rooms[temp])
            {
                if(!visited[x])
                    q.push(x);
            }
        }
        for(int i=1;i<visited.size();i++)
        {
            if(visited[i]==0)
                return false;
        }
        return true;
    }
};
