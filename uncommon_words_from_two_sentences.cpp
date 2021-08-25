// https://leetcode.com/problems/uncommon-words-from-two-sentences/submissions/

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map <string,int> res;
        string word="";
        vector<string>v;
        
        for(char x:s1)
        {
            if(x==' ')
            {
                res[word]++;
                word="";
            }
            else
            {
                word += x;
            }
        }
        res[word]++;
        word="";
        
        for(char x:s2)
        {
            if(x==' ')
            {
                res[word]++;
                word="";
            }
            else
            {
                word += x;
            }
        }
        res[word]++;
        for(auto x:res)
        {
            cout << x.first << endl;
            if(x.second==1)
                v.push_back(x.first);
        }
        return v;
    }
};
