// https://leetcode.com/problems/valid-parentheses/submissions/

class Solution {
public:
    bool isValid(string s) {
        stack <char>stk;
        for(char i:s)
        {
            if(stk.empty() || i == '(' || i == '{' || i == '[')
                stk.push(i);
            else
            {
                if(i==')')
                {
                    if(stk.top()=='(')
                        stk.pop();
                    else
                        stk.push(i);
                }
                if(i=='}')
                {
                    if(stk.top()=='{')
                        stk.pop();
                    else
                        stk.push(i);
                }
                if(i==']')
                {
                    if(stk.top()=='[')
                        stk.pop();
                    else
                        stk.push(i);
                }
            }
        }
        return (stk.empty());
    }
};
