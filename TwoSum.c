//https://leetcode.com/problems/two-sum/

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *r = malloc(2*(sizeof(int)));
    *returnSize =2;
    for (int i=0;i<numsSize-1;i++)
    {
        for(int j=(i+1);j<numsSize;j++)
        {
                if ((nums[i] + nums[j]) == target)
                {
                    r[0]=i;
                    r[1]=j;
                    return r;
                }
        }
    }
    return 0;
}
