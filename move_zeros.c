// https://leetcode.com/problems/move-zeroes/

void moveZeroes(int* nums, int numsSize){
    int *a = malloc(numsSize * sizeof(int));
    int k=0;
    for (int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            a[k]=nums[i];
            k++;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            a[k]=nums[i];
            k++;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        nums[i]= a[i];
    }
}

// alternate

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void moveZeroes(int* nums, int numsSize){
    int j=0;
    for (int i=0;i<numsSize;i++)
    {
        if(nums[i] != 0)
        {
            swap(&(nums[i]),&(nums[j]));
            j++;
        }
    }
}
