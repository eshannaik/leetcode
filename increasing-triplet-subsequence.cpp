// https://leetcode.com/problems/increasing-triplet-subsequence/submissions/

class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
//         int n= nums.size();
        
//         int c=0;
//         for(int i=0;i<n;i++)
//         {
//             int temp =i;
//             // cout << i+1 << temp+1 << endl;
//             for(int j=temp;j<n-1;j++)
//             {
//                 cout << nums[temp] << nums[j+1] << endl;
//                 if(nums[temp]<nums[j+1])
//                 {
//                     // cout << c << endl;
//                     c++;
//                     temp = j;
//                     // temp = j;
//                     if(c==2)
//                         return true;
//                 }
//                 // cout << temp << endl;
//             }
//             // cout << "HELLO" << " " << c << endl;
//             c=0;
//         }
//         return false;
        int n=a.size(),one=INT_MAX,two=INT_MAX;
        if(n<3)
            return 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=one)
                one=a[i];
            else if(a[i]<=two)
                two=a[i];
            else
                return 1;
            // cout << one << " " << two << endl;
        }
        return 0;
    }
};

// [1,2,3,4,5]
// [5,4,3,2,1]
// [2,1,5,0,4,6]
// [1,2,1,3]
// [5,1,6]
// [0,4,2,1,0,-1,-3]
// [1,5,0,4,1,3]
