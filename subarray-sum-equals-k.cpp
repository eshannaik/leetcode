// https://leetcode.com/problems/subarray-sum-equals-k/submissions/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int c=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         // cout << nums[j] << endl;
        //         sum +=nums[j];
        //         // cout << sum << endl;
        //         if(sum==k)
        //             c++;
        //     }
        //     // cout << "HELLO" << endl;
        //     sum=0;
        // }
        // return c;
        
        unordered_map <int,int> res;
        
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            if(sum==k)
                c++;
            if(res.find(sum-k)!=res.end())
                c +=res[sum-k];
            res[sum]++;
        }
        return c;
    }
};
