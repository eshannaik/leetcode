// https://leetcode.com/problems/palindromic-substrings/submissions/

class Solution {
public:
    void check(int l,int r,string s,int &c)
    {
        int n=s.length();
        
        while(l>=0 && r<n && s[l]==s[r])
        {
            c++;
            l--;
            r++;
        }
    }
    
    int countSubstrings(string s) {
        // string w = "";
        int maxx=0;
        
        int n=s.length();
        int c=0;
        
        for (int i=0;i<n;i++)
        {
            int l=i;
            int r=i;
            
            check(l,r,s,c);
            // while(l>=0 && r<n && s[l]==s[r])
            // {
            //     c++;
            //     l--;
            //     r++;
            // }
            
            l=i;
            r=i+1;
            
            check(l,r,s,c);
            // while(l>=0 && r<n && s[l]==s[r])
            // {
            //     c++;
            //     l--;
            //     r++;
            // }
        }
        return c;
    }
};
