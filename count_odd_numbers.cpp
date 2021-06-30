//https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/submissions/

class Solution {
public:
    int countOdds(int low, int high) {
        // int i=low,c=0;
        // if(i%2==0)
        //     i++;
        // while(i<=high)
        // {
        //     c++;
        //     i=i+2;
        // }
        // return c;
        if(low%2==0 && high%2==0)
            return (high-low)/2;
        else if(low%2!=0 && high%2!=0)
            return ((high-low)/2)+1;
        return ((high-low)/2)+1;
    }
};
