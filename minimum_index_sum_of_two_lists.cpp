// https://leetcode.com/problems/minimum-index-sum-of-two-lists/submissions/

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int mini=INT_MAX;
        vector <int> v,v1;
        int temp;
        for(int i=0;i<list1.size();i++)
        {
            for(int j=0;j<list2.size();j++)
            {
                int sum=0;
                if(list1[i]==list2[j])
                {
                    sum = i+j;
                    if(sum<=mini){
                        mini=sum;
                        temp=i;
                        v.push_back(i);
                        v1.push_back(sum); 
                    }
                    break;
                }
            }
        }
        vector <string> res;
        int z = v1.size();
        int m=z-2;
        if(z==1)
        {
            res.push_back(list1[v[0]]);
            return res;
        }
        for(int i=z;i>=1;i--)
        {
            if(m<0)
                m=0;
            if(v1[z-1]==v1[m])
                res.push_back(list1[v[z-1]]);
            
            if(v1[z-1]!=v1[m])
            {
                res.push_back(list1[v[z-1]]);
                return res;
            }
            z--;
            m--;
        }
        return res;
    }
};
