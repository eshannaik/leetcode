// https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/submissions/

class Solution {
public:
    int minTimeToType(string word) {
        int c=1;
        char t='a';
        
        for(int i=0;i<word.length();i++)
        {
            c += 1 + min(abs(word[i]-t),26-abs(word[i]-t));
            t=word[i];
        }
        return c-1;
    }
};
