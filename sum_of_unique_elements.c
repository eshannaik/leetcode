// https://leetcode.com/problems/sum-of-unique-elements/

int sumOfUnique(int* nums, int numsSize){
    int *a = malloc(numsSize *sizeof(int));
    int c=0,k=0,sum=0;
    for(int i=0;i<(numsSize-1);i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                c++;
            }        
        }
        if(c==1)
        {
            a[k]=nums[i];
            k++;
        }         
        c=0;
    }
    for (int i=0;i<(numsSize-1);i++)
    {
        if(nums[(numsSize-1)]==nums[i])
            c++;
    }
    if(c==0)
    {
        a[k]=nums[(numsSize-1)];
        k++;
    }
    for (int i=0;i<k;i++)
    {
        sum = sum+a[i];
    }
    return sum;
}
