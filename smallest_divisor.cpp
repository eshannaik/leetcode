// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1,right=1000000,m,sum;
        while(left<right)
        {
            m=(left+right)/2;
            sum=0;
            for(auto x:nums)
            {
                sum = sum +(x+m-1)/m;
            }
            // cout << sum <<endl;
            if(sum>threshold)
                left=m+1;
            else
                right=m;
        }
        return left;
    }
};
