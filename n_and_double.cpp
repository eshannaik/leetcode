// https://leetcode.com/problems/check-if-n-and-its-double-exist/submissions/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            int temp=2*arr[i];
            auto it = find(arr.begin(),arr.end(),temp);
            if(it != arr.end() && it-arr.begin() != i)
                return true;
        }
        return false;
    }
};
