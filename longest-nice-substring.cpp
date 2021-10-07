// https://leetcode.com/problems/longest-nice-substring/submissions/

class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.length()<2){
            return "";
        }
    
        set<char> res;
        for(char x:s)
            res.insert(x);
        
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            if(res.find(tolower(c))==res.end() || res.find(toupper(c))==res.end())
            {
                string left = longestNiceSubstring(s.substr(0,i));
                string right = longestNiceSubstring(s.substr(i+1));
                
                if(left.length()>=right.length()){
                    return left;
                }
                else
                    return right;
            }
        }
        return s;
        
    }
};
