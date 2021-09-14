// https://leetcode.com/problems/container-with-most-water/submissions/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        // for(int i=0;i<height.size();i++)
        // {
        //     for(int j=i+1;j<height.size();j++)
        //     {
        //         maxi = max(maxi,(j-i)*min(height[i],height[j]));
        //     }
        // }
        // return maxi;
        int l=0;
        int h=height.size()-1;
        
        while(l<h)
        {
            int low = height[l];
            int high = height[h];
            
            maxi = max(maxi,(h-l)*min(low,high));
            
            if(low<high)
                l++;
            else
                h--;
        }
        return maxi;
    }
};
