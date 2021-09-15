// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map <int,int> res;
        int num1,num2;
        
        for(int i=0;i<numbers.size();i++)
            res[numbers[i]]=i;
        
        for(int i=0;i<numbers.size();i++)
        {
            auto it = res.find(target - numbers[i]);
            // cout << it->first << it->second << endl;
            if(it != res.end())
            {
                // cout << numbers[i] << i << it->first << it->second << endl;
                num1=i;
                num2=it->second;
                break;
            }
        }
        return {num1+1,num2+1};
    }
};
