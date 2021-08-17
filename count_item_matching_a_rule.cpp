// https://leetcode.com/problems/count-items-matching-a-rule/submissions/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int c=0;
        int temp;
        
        if(ruleKey == "name")
            temp= 2;
        else if(ruleKey == "color")
            temp= 1;
        else if(ruleKey == "type")
            temp= 0;
        
        for(int i=0;i<items.size();i++)
        {
            if(items[i][temp]==ruleValue)
                c++;
        }
        return c;
    }
};
