// https://leetcode.com/problems/binary-subarrays-with-sum/submissions/

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map <int,int> res;
        
        res[0]=1;
        int sum=0;
        int c=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum +=nums[i];
            // cout << sum << sum-goal << endl;
            if(res.find(sum-goal)!=res.end())
                c += res[sum-goal];
            
            res[sum]++;
        }
        return c;
        
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         sum += nums[j];
        //         if(sum == goal)
        //             c++;
        //     }
        //     sum=0;
        // }
        // return c;
    }
};
