// https://leetcode.com/problems/subarray-sums-divisible-by-k/submissions/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        int c=0;
        int n=nums.size();
        map <int,int> res;
        int rem;
        res[0]=1;
        
        for(int i=0;i<n;i++)
        {
            sum +=nums[i];
            rem = sum%k;
            
            if(rem<0)
                rem += k;
            
            // if(rem==0)
            //     c++;
            if(res.find(rem)!=res.end())
                c+=res[rem];
            res[rem]++;
        }
        return c;
    }
};
