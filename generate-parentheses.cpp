// https://leetcode.com/problems/generate-parentheses/submissions/

class Solution {
public:
    void helper(int o,int c,string temp,vector<string>&res)
    {
        if(o==c && c==0)
        {
            res.push_back(temp);
            return;
        }
        
        if(o>0)
        {
            temp.push_back('(');
            helper(o-1,c,temp,res);
            temp = temp.substr(0,temp.length()-1);
        }
        
        if(o<c)
        {
            temp.push_back(')');
            helper(o,c-1,temp,res);
            temp = temp.substr(0,temp.length()-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector <string> res;
        string temp="";
        
        helper(n,n,temp,res);
        return res;
    }
};
