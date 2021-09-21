// https://leetcode.com/problems/first-missing-positive/submissions/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector <int> v;
        for(auto x:nums){
            if(x>0)
                v.push_back(x);
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        // for(auto x:v)
        //     cout << x << endl;
        for(int i=0;i<v.size();i++)
        {
            // cout << i+1 << v[i] << endl;
            if(i+1!=v[i])
                return i+1;
        }
        return v.size()+1;
        
//         map <int,int> temp;
//         for(auto x:nums)
//         {
//             if(x>0)
//             {
//                 if(temp.find(x)==temp.end())
//                     temp[x]=1;
//                 else
//                     temp[x]++;
//             }
//         }
//         int i=0;
        
//         // for(auto x: temp)
//             // cout << x.first << endl;
        
//         for(auto x:temp)
//         {
//             if(x.first!=i+1)
//                 return i+1;
//             i++;
//         }
//         return temp.size()+1;
    }
};
