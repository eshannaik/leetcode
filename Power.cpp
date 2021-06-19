// https://leetcode.com/problems/powx-n/submissions/

double p=1,sign=0;
        if(n == INT_MIN)
        {
            x = x * x;
            n = n/2;
        }
        if (n<0)
        {
            n = -n;
            sign = 1;
        }
        while(n){
            if(n&1)
                p=p*x;
            n=n/2;
            x=x*x;
        }
        if(sign==1)
            p=1/p;
        return p;

// https://leetcode.com/problems/power-of-two/submissions/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // long x=2;
        // if(n==1)
        //     return 1;
        // if(n==2)
        //     return 1;
        // while(x>0)
        // {
        //     x>>=1;
        //     if(x==n)
        //         return true;
        //     if(x>INT_MAX)
        //         break;
        // }
        // return false;
        return (n>0 && 1073741824%n==0);
    }
};
