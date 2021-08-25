// https://leetcode.com/problems/is-subsequence/submissions/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int temp=0;
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=temp;j<t.length();j++)
            {
                if(s[i]==t[j])
                {
                    c++;
                    temp=j+1;
                    break;
                }
            }
        }
        if(c==s.length())
            return true;
        return false;
    }
};
