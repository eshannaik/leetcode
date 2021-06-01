// https://leetcode.com/problems/climbing-stairs/submissions/

int climbStairs(int n){
    int temp1 = 1;
    int temp2 = 2;
    int ans=0;
    
    if(n<=3)
        return n;
    
    for(int i=1;i<n-1;i++)
    {
        ans = temp1 +temp2;
        temp1 = temp2;
        temp2 = ans;
    }
    return ans;
}
