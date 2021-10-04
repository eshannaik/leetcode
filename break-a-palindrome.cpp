// https://leetcode.com/problems/break-a-palindrome/

class Solution {
public:
    string breakPalindrome(string p) {
        if(p.length()==1)
            return "";

        if(p.length()%2!=0)
        {
            if(p[0]=='a' && p[p.length()-1]=='a')
            {
                p[p.length()-1]='b';
                return p;
            }
        }
        if(p.length()==2)
        {
            if(p[0]=='a' && p[1]=='a')
            {
                p[1]='b';
                return p;
            }
            else
            {
                p[0]='a';
                return p;
            }
        }
        for(int i=0;i<p.length();i++)
        {
            if(p[i]!='a')
            {
                p[i]='a';
                break;
            }
        }
        return p;
    }
};
