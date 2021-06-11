// https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) {
        long i=0,n=0,limit=0;
        int sign=0;
        while(s[i] == ' ') 
            i++;
        if(s[i] == '-' || s[i]== '+')
        {
            if(s[i] == '-')
                sign++;
            i++;
        }
        while(s[i] >= '0' && s[i] <= '9')
        {
            if(n > INT_MAX && sign != 1)
                return INT_MAX;
            if(n > INT_MAX && sign == 1) 
                return INT_MIN;
            n = n*10+(s[i]-48);
            i++;
        }
        if(sign==1)
            n=n*-1;
        if(n < INT_MIN) 
                return INT_MIN;
        if(n > INT_MAX)
                return INT_MAX;
        return n;
    }
};
