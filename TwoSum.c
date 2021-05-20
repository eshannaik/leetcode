//https://leetcode.com/problems/two-sum/

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int sum=0;
    int *r = malloc(2*(sizeof(int)));
    *returnSize =2;
    for (int i=0;i<numsSize;i++)
    {
        for(int j=i;j<numsSize;j++)
        {
            if (i!=j)
            {
                sum = nums[i] + nums[j];
                if (sum == target)
                {
                    r[0]=j;
                    r[1]=i;
                    return r;
                }
            }
            sum=0;
        }
    }
    return 0;
}
