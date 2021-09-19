// https://leetcode.com/problems/sliding-window-median/submissions/

class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int sum=0;
        vector <double> v;
        vector <double> temp;
        double median;
        
        for(int i=0;i<k;i++)
        {
            // temp.push_back(nums[i]);
            temp.insert(lower_bound(temp.begin(),temp.end(),nums[i]),nums[i]);
        }
        sort(temp.begin(),temp.end());
        
        if(k%2!=0)
            median = temp[k/2];
        else
            median = (temp[k/2]+temp[(k/2)-1])/2;
        
        // cout << median << temp[k/2] << temp[(k/2)-1] << endl;
        // cout << (temp[k/2]+temp[(k/2)-1])/2 << endl;
        v.push_back(median);
        
        for(int i=k;i<nums.size();i++)
        {
            // cout << nums[i-k] << endl;
            temp.erase(lower_bound(temp.begin(),temp.end(),nums[i-k]));
            temp.insert(lower_bound(temp.begin(),temp.end(),nums[i]),nums[i]);
            // auto it = find(temp.begin(),temp.end(),nums[i-k]);
            // temp.erase(remove(temp.begin(),temp.end(),nums[i-k]),temp.end());
            // temp.erase(it);
            // temp.push_back(nums[i]);
            // sort(temp.begin(),temp.end());
            
            // cout << nums[i] << endl;
            if(k%2!=0)
                median = temp[k/2];
            else
                median = (temp[k/2]+temp[k/2-1])/2;
            
            v.push_back(median);
            sum=0;
        }
        
        return v;
    }
};

