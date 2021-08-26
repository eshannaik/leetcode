// https://leetcode.com/problems/truncate-sentence/submissions/

class Solution {
public:
    string truncateSentence(string s, int k) {
        vector <string> v;
        string res="";
        string word="";
        for(auto x:s)
        {
            if(x==' ')
            {
                v.push_back(word);
                word=" ";
            }
            else
                word+=x;
        }
        v.push_back(word);
        for(int i=0;i<k;i++)
            res+=v[i];
        return res;
    }
};
