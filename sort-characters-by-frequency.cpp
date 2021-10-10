// https://leetcode.com/problems/sort-characters-by-frequency/submissions/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char,int> res;
        int temp=0;
        char max;
        int j=0;
        string w="";
        
        priority_queue <pair<int,char>> q;
        
        for(auto i:s)
            res[i]++;
        
        for(auto i:res)
            q.push(make_pair(i.second,i.first));
        
        while(!q.empty())
        {
            int a=q.top().first;
            char b = q.top().second;
            
            for(int i=0;i<a;i++)
                w += b;
            
            q.pop();
        }
        return w;
    }
};
