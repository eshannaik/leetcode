// https://leetcode.com/problems/happy-number/submissions/

bool isHappy(int n){
    int c=0,sum=0,r,temp;
    while(n/10 !=0)
    {
        temp=n;
        while(temp !=0)
        {
            r=temp%10;
            sum=sum+(r*r);
            temp=temp/10;
        }
        n=sum;
        if(sum==1)
        {
            return true;
        }
        sum=0;
    }
    if(n==1 || n==7)
    {
        return true;
    }
    return false;
}
