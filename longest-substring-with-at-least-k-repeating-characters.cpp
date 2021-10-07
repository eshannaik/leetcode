// https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/submissions/

class Solution {
public:
    int longestSubstring(string s, int k) {
        unordered_map <char,int> res;
        int temp = 0;
        // int start;
        
        if(s.length()==0)
            return 0;
        
        for(auto x:s)
            res[x]++;
        
        for(int i=0;i<s.length();i++)
        {
            if(res[s[i]]>0 && res[s[i]]<k)
            {
                // cout << s.substr(i+1) << endl;
                int left = longestSubstring(s.substr(0,i),k);
                int right = longestSubstring(s.substr(i+1),k);
                
                // temp=1;
                if(left>right)
                    return left;
                else
                    return right;
            }
        }
        return s.length();
    }
};
