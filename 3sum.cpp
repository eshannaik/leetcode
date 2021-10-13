// https://leetcode.com/problems/3sum/submissions/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector<int>> res;
        if(nums.size()<3)
            return {};
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++)
        {
            if ((i>0) && (nums[i]==nums[i-1]))
                continue;
            int l=i+1;
            int r=nums.size()-1;
            
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                // cout << sum << i << l << r << endl;
                if(sum==0)
                {
                    // cout << sum << i << l << r << endl;
                    // cout << nums[i] << nums[l] << nums[r] << endl;
                    vector <int> temp ({nums[i],nums[l],nums[r]});
                    sort(temp.begin(),temp.end());
                    // for(auto x:temp)
                        // cout << x << endl;
                    res.push_back(temp);
                    
                    while(l<r && nums[l]==nums[l+1])
                        l++;
                    while(l<r && nums[r]==nums[r-1])
                        r--;
                    
                    l++;
                    r--;
                }
                else if(sum < 0) 
                    l++;
                else 
                    r--;
            }
        }
        
        return res;
    }
};
