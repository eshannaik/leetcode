// https://leetcode.com/problems/isomorphic-strings/submissions/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,int> s1;
        unordered_map <char,int> t1;
        unordered_map <char,char> r;
        for(int i=0;i<s.length();i++)
        {
            if(s1[s[i]]>0 or t1[t[i]]>0){
                if(r[s[i]] != t[i])
                    return false;
            }
            s1[s[i]]++;
            t1[t[i]]++;
            r[s[i]] = t[i];
        }
        return true;
    }
};
