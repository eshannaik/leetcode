// https://leetcode.com/problems/maximum-binary-string-after-change/submissions/

class Solution {
public:
    string maximumBinaryString(string b) {
        int n=b.length();
        string w="";
        int z=0,f=-1;
        
        for(int i=0;i<n;i++)
        {
            if(b[i]=='0')
            {
                z++; // total 0
                if(f==-1)
                    f=i; // index of first 0
            }
        }
        // cout << f << z << endl;
        int pos = f+z-1;
        for(int i=0;i<n;i++)
        {
            if(i==pos)
                w +='0';
            else
                w +='1';
        }
        return w;
    }
};
