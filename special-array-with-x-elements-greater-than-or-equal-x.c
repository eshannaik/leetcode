// https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/submissions/


int specialArray(int* nums, int numsSize){
    int x=0,c=0,max=0;
    for(x=0;x<=numsSize;x++)
    {
        for(int i=0;i<numsSize;i++)
        {
            if(nums[i]>=x)
                c++;
        } 
        if(c==x && c!=0)
            return x;
        c=0;
    }
    return -1;
}
