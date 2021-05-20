//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int *r = malloc(2*(sizeof(int)));
    *returnSize = 2;
        
    for (int i=0;i<numbersSize-1;i++)
    {
        for(int j=(i+1);j<numbersSize;j++)
        {
            if(numbers[i]+numbers[j]==target)
            {
                r[0]=i+1;
                r[1]=j+1;
                return r;
            }
        }
    }
    return 0;
}
