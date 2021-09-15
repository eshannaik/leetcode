// https://leetcode.com/problems/reverse-only-letters/submissions/

class Solution {
public:
    string reverseOnlyLetters(string s) {
        string w="";
        int j=s.length()-1;
        
        stack <char> st;
        for(auto x:s)
        {
            if (isalpha(x))
                st.push(x);
        }
        for(auto x:s)
        {
            if(isalpha(x))
            {
                w +=st.top();
                st.pop();
            }
            
            if(!isalpha(x))
            {
                w += x;
            }
        }
        return w;
    }
};
