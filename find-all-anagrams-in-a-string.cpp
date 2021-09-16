// https://leetcode.com/problems/find-all-anagrams-in-a-string/submissions/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        if(s.length() < p.length())
            return {};
        vector <int> f1(26,0),f2(26,0),v;
        int n=p.length();
        for(int i=0;i<n;i++)
        {
            f1[s[i]-'a']++;
            f2[p[i]-'a']++;
        }
        if(f1==f2)
            v.push_back(0);
        
        for(int j=n;j<s.length();j++)
        {
            f1[s[j-p.size()]-'a']--;
            f1[s[j]-'a']++;
            
            if(f1==f2)
                v.push_back(j-n+1);
        }
        
        return v;
    }
};
