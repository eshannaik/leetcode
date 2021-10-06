// https://leetcode.com/problems/reverse-string-ii/submissions/

class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        int flag=0;
        stack <char> st;
        string w="";
        
        if(n<k)
        {
            reverse(s.begin(),s.end());
            return s;
        }
        
        for(int i=0;i<n;)
        {
            if(i%k==0)
                flag++;
            
            if(flag%2!=0)
            {
                for(int j=i;j<k+i;j++)
                {
                    if(j>=n)
                        break;
                    st.push(s[j]);
                }
                
                while(!st.empty())
                {
                    w += st.top();
                    st.pop();
                }
                i+=k;
            }
            else if(flag%2==0)
            {
                for(int j=i;j<k+i;j++)
                {
                    if(j>=n)
                        return w;
                    w += s[j];
                }
                i+=k;
            }
        }
        return w;
    }
};
