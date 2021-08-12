// https://leetcode.com/problems/maximum-ice-cream-bars/submissions/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum=0,i=0,c=0;
        sort(costs.begin(),costs.end());
        if(coins<costs[0])
            return 0;
        if(coins>costs[0] && costs.size()==1)
            return 1;
        while(i<costs.size()-1)
        {
            sum = sum + costs[i];
            c++;
            if(coins==sum || costs[i+1]+sum > coins)
                return c;
            i++;
        }
        sum = sum + costs[costs.size()-1];
        if(sum < coins)
            return c+1;
        return c;
    }
};
