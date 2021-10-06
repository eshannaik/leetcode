// https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/

class Solution {
public:
    string reverseWords(string s) {
        string w="";
        string res="";
        
        for(auto x:s)
        {
            if(x==' ')
            {
                reverse(w.begin(),w.end());
                res += w;
                res += ' ';
                w="";
            }
            else
                w += x;
        }
        reverse(w.begin(),w.end());
        res += w;
        return res;
    }
};
