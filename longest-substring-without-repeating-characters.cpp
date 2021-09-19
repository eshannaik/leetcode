// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> temp;
        int i=0;
        int j=0;
        int n=s.length();
        int maxx=0;
        
        for (int i=0;i<n;i++)
        {
            unordered_map <char,int> temp;
            for(int j=i;j<n;j++)
            {
                temp[s[j]]++;
                if(temp[s[j]]==2)
                    break;
                else
                    maxx = max(maxx,j-i+1);
            }
        }
        
        return maxx;
    }
};
