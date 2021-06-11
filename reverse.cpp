// https://leetcode.com/problems/reverse-integer/submissions/

class Solution {
public:
    int reverse(int x) {
        long n=0;
        while(x != 0)
        {
            n = n*10+x%10;
            x = x/10;
        }
        if(INT_MIN<=n && n<=INT_MAX)
            return n;
        return x;
    }
};
