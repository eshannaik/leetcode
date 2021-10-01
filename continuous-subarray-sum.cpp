// https://leetcode.com/problems/continuous-subarray-sum/submissions/

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        
        if(nums.size()<2)
            return false;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             // if(sum<0)
//             //     sum=0;
//             sum +=nums[i];
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 sum += nums[j];
//                 // cout << sum <<" " << sum%k << endl;
//                 if(sum%k==0)
//                     return true;
//             }
//             sum=0;
//         }
//         return false;
        
        unordered_map <int,int> res;
        res[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            if(k!=0)
                sum = sum%k;
            // cout << temp << endl;

            if(res.find(sum)!=res.end())
            {
                if(i-res[sum]>1)
                    return true;
            }
            else
                res[sum]=i;
        }
        return false;
    }
};
