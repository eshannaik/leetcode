// https://leetcode.com/problems/coin-change-2/submissions/

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector <int> res(amount+1);
        res[0]=1;
        
        for(int i=0;i<coins.size();++i)
        {
            for(int j=coins[i];j<=amount;++j)
            {
                res[j]+=res[j-coins[i]];
            }
        }
        return res[amount];
    }
};

