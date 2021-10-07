// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

class Solution {
public:
    double average(vector<int>& salary) {
        int max = *max_element(salary.begin(),salary.end());
        int min = *min_element(salary.begin(),salary.end());
        double sum=0;
        
        for(auto x:salary)
        {
            if(x!= max && x!=min)
                sum += x;    
        }
        return sum/(salary.size()-2);
    }
};
