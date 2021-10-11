// https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/submissions/

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int e=0,o=0;
        
        for(auto x:position)
        {
            if(x%2==0)
                e++;
            else
                o++;
        }
        return min(e,o);
    }
};
