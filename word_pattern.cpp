// https://leetcode.com/problems/word-pattern/submissions/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map <string,int> m;
        unordered_map <char,int> p;
        unordered_map <string,char> res;
        string w;
        vector <string> v;

        for (int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
                w += s[i];
            if (s[i]==' ')
            {
                v.push_back(w);
                w.clear();
            }
        }
        v.push_back(w);
        
        if(v.size() != pattern.length())
            return false;
        
        for (int i=0;i<v.size();i++)
        {
            if(m[v[i]] > 0 or p[pattern[i]] > 0)
            {
                if (res[v[i]] != pattern[i])
                    return false;
            }
            m[v[i]]++;
            p[pattern[i]]++;
            res[v[i]]=pattern[i];            
        }
        return true;
    }
};
