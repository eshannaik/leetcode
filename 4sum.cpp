// https://leetcode.com/problems/4sum/submissions/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {        
        vector <vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        if(n<4)
            return res;
        
        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=i+1;j<nums.size()-2;j++)
            {
                int f=target-nums[i]-nums[j];
                
                int l=j+1;
                int r=nums.size()-1;

                while(l<r)
                {
                    int sum=nums[l]+nums[r];
                    // cout << sum << i << l << r << endl;
                    if(sum==f)
                    {
                        // cout << sum << i << l << r << endl;
                        // cout << nums[i] << nums[l] << nums[r] << endl;
                        // cout << sum << endl;
                        vector <int> temp ({nums[i],nums[j],nums[l],nums[r]});
                        if(find(res.begin(),res.end(),temp)== res.end())
                        {
                            sort(temp.begin(),temp.end());
                            // for(auto x:temp)
                                // cout << x << endl;
                            res.push_back(temp);
                        }

                        while(l<r && nums[l]==nums[l+1])
                            l++;
                        while(l<r && nums[r]==nums[r-1])
                            r--;

                        l++;
                        r--;
                    }
                    else if(sum < f) 
                        l++;
                    else 
                        r--;
                }
            }
        }
        
        return res;
    }
};
