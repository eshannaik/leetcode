// https://leetcode.com/problems/reverse-words-in-a-string/submissions/

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string w="",res="";
        
        for(int i=n-1;i>=1;i--)
        {
            if(s[i]==' ' && s[i-1]!=' ')
            {
                reverse(w.begin(),w.end());
                res += w;
                // cout << w << endl;
                if(w!="")
                    res += ' ';
                w="";
            }
            else if(s[i]!=' ')
                w += s[i];
        }
        if(s[0]!=' ')
            w += s[0];
        reverse(w.begin(),w.end());
        res += w;
        return res;
    }
};
