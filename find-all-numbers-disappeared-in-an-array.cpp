// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> v;
        int j=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int i=1;
        
        while(i<=n)
        {
            // cout << i << nums[j] << endl;
            if(i==nums[j])
            {
                // cout << i<< endl;
                i++;
                j++;
            }
            else{
                v.push_back(i);
                i++;
            }
        }
        return v;
    }
};
