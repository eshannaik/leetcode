//https://leetcode.com/problems/search-insert-position/submissions/

int searchInsert(int* nums, int numsSize, int target){
    int c=0;
    for (int i=0;i<numsSize;i++)
    {
        if(nums[i]>=target)
            return c;
        c++;
    }
    return c;
}
