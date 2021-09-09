// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/submissions/

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char> st;
        for(auto x:s)
        {
            if(x=='(')
                st.push(x);
            else
            {
                if(st.size()>0 && st.top()=='(')
                    st.pop();
                else
                    st.push(')');
            }
        }
        return st.size();
    }
};
