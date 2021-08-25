// https://leetcode.com/problems/valid-palindrome/submissions/

class Solution {
public:
    bool isPalindrome(string s) {
        string w;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                w += s[i];
        }
        string temp = w;
        reverse(temp.begin(),temp.end());
        return temp == w;
    }
};
