// https://leetcode.com/problems/slowest-key/submissions/

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        // map <int,int> res;
        pair <int,char> key = {releaseTimes[0],keysPressed[0]};
        // res[keysPressed[i]]=releaseTimes[1]-releaseTimes[0]
        for(int i=1;i<releaseTimes.size();i++)
        {
            // cout << keysPressed[i] << releaseTimes[i]-releaseTimes[i-1] << endl;
            key = max (key,{releaseTimes[i]-releaseTimes[i-1],keysPressed[i]});
            // cout << key.first << key.second << endl;
        }
        return key.second;
    }
};
