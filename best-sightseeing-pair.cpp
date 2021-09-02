// https://leetcode.com/problems/best-sightseeing-pair/submissions/

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxSum=values[0],prev=INT_MIN;
        for(int i=1;i<values.size();i++)
        {
            prev = max(prev,values[i]-i+maxSum);
            maxSum = max(maxSum,values[i]+i);
        }
        return prev;
    }
};
