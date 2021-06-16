// https://leetcode.com/problems/single-number/submissions/

sort(nums.begin(),nums.end());
        if (nums.size()==1)
            return nums[0];
        for(int i=0;i<(nums.size()-1);i=i+2)
        {
            if(nums[i]!=nums[i+1])
                return nums[i];
        }
        if(nums.size()%2!=0)
            return nums[nums.size()-1];
        return 0;

// https://leetcode.com/problems/missing-number/submissions/

int n=nums.size();
int total_sum = (n*(n+1))/2;
int sum = accumulate(nums.begin(), nums.end(), 0);
        
return total_sum-sum;
