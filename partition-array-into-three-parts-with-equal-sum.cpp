// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/submissions/

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(auto x:arr)
            sum += x;
        if(sum%3!=0)
            return false;

        int temp=0;
        int c=0;
        int k=sum/3;

        for(int i=0;i<arr.size();i++)
        {
            temp +=  arr[i];
            
            if(temp==k)
            {
                c++;
                temp=0;
            }
        }
        if(c==3)
            return true;
        if(sum==0 && c>3)
            return true;
        if(c>3)
            return true;
        return false;
    }
};
