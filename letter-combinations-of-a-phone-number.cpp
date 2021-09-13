// https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> phone={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        vector <string> res;
        queue <string> q;
        q.push("");
        
        if(digits.size()==0)
            return {};
            
        while(!q.empty())
        {
            string temp = q.front();
            q.pop();
            
            if(temp.length()==digits.length())
                res.push_back(temp);
            else
            {
                string s = phone[digits[temp.length()]-'0'];
                // cout << s << endl;
                for(auto x:s)
                    q.push(temp+x);
            }
        }
        return res;
    }
};
