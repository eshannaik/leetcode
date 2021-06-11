// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        int r=0,a=0;
        if (x < 0) 
            return false;
        if (x < 10) 
            return true;
        string s = to_string(x);
        
        int i=0;
        int j= s.length()-1;
        
        while(i<j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
