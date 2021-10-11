// https://leetcode.com/problems/minimum-moves-to-convert-string/submissions/

class Solution {
public:
    int minimumMoves(string s) {
        vector <int> f(2,0);
        int n=s.length();
        int j=0;
        int c=0;
        
        while(j<n)
        {
            if(s[j]=='X')
            {
                c++;
                j+=3;
            }
            else
                j++;
        }
        return c;
    }
};
