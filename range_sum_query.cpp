// https://leetcode.com/problems/range-sum-query-immutable/submissions/

class NumArray {  
public:
    vector <int> res;
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            // cout << nums[i];   
            if(i==0)
                res.push_back(nums[i]);
            else
                res.push_back(nums[i]+res.back());
            // cout << res[i] << endl;
        }
    }
    
    int sumRange(int left, int right) {
        int v = res[right];
        if(left==0)
            return v;
        // cout << res[left-1] << endl;
        return v-res[left-1];
    }
};
