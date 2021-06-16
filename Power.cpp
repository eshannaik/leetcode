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
