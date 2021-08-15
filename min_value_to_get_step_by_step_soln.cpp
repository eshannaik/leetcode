// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/submissions/

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=1,c=0;
        // vector <int> v;
        while(true)
        {
            int temp=sum;
            for(auto x:nums)
            {
                sum = sum + x;
                if(sum>0)
                    c++;
                // v.push_back(sum);
            }
            // for(auto x:v)
            // {
            //     if(x>0)
            //         c++;
            // }
            // cout << c <<endl;
            if(c==nums.size())
                return temp;
            sum=temp+1;
            // v.clear();
            c=0;
        }
    }
};
