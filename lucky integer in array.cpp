// https://leetcode.com/problems/find-lucky-integer-in-an-array/submissions/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        map <int,int> res;
        int temp=-1,max=0;
        for (auto &i: arr)
        {
            if(res.find(i)==res.end())
                res[i]=1;
            else
                res[i]++;
        }
        for (auto x:res)
        {
            if(x.first==x.second)
                temp=x.second;
            // cout << temp<<endl;
            if(temp>max)
                max=temp;
        }
        if(max==0)
            return -1;
        return max;
    }
};
