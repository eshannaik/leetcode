// https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/

class Solution {
public:
    bool isOperator(string &s){
        return (s == "+" || s == "-" || s == "*" || s == "/");
    }
    
    int evalRPN(vector<string>& tokens) {
        stack <int> temp;
        for (auto x:tokens)
        {
            if(isOperator(x))
            {
            int a = temp.top();
            temp.pop();
            int b = temp.top();
            temp.pop();  
                
            if(x=="+")
                temp.push(a+b);
            else if(x=="*")
                temp.push(a*b);
            else if(x=="/")
                temp.push(b/a);
            else if(x=="-")
                temp.push(b-a);
            }
            else
            {
                temp.push(stoi(x));
            }
        }
        return temp.top();
    }
};
