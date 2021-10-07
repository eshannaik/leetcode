// https://leetcode.com/problems/maximum-average-subarray-i/submissions/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double maxx=INT_MIN;
        
        for(int i=0;i<k;i++)
            sum += nums[i];
        
        double avg = sum/k;
        maxx = max(maxx,avg);
        
        for(int i=k;i<nums.size();i++)
        {
            sum -= nums[i-k];
            sum += nums[i];
            
            avg = sum/k;
            maxx = max(maxx,avg);
        }
        
        return maxx;
    }
};
