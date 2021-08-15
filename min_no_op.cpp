// https://leetcode.com/problems/minimum-number-of-operations-to-reinitialize-a-permutation/

class Solution {
public:
    int reinitializePermutation(int n) {
        int i=0;
        int c=0;
        vector <int> v;
        while(i<n)
        {
            v.push_back(i);
            i++;
        }
        vector <int> temp=v;
        while(true)
        {
            for(int j=0;j<n;j++)
            {
                if(v[j]%2==0)
                    v[j]=v[j]/2;
                else
                    v[j]=(n/2+(v[j]-1)/2);
            }
            c++;
            if(temp==v)
                return c;
        }
    }
};
