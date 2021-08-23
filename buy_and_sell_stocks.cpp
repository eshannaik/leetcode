// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
            return 0;
        int sum=prices[0],profit=INT_MIN;
        for(int i=1;i<prices.size();i++)
        {
            sum = min(prices[i],sum);
            profit = max(prices[i]-sum,profit);
            // cout << sum << " " << profit << endl;
        }
        return profit;
    }
};
