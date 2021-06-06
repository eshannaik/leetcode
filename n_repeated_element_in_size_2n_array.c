// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/submissions/

int repeatedNTimes(int* nums, int numsSize){
    int x = numsSize/2,c=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
                c++;
        }
        if(c==x)
            return nums[i];
        c=0;
    }
    return 0;
}
