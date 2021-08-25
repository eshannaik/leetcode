// https://leetcode.com/problems/string-compression/submissions/

class Solution {
public:
    int compress(vector<char>& chars) {
        map<char,int>res;
        vector<int>v;
        int c=0;
        int n=chars.size();
        for(int i=0;i<n;i++)
        {
            int count=1;
            
            while(i<n-1 && chars[i]==chars[i+1])
            {
                count++;
                i++;
            }
            chars[c++]=chars[i];
            
            if(count!=1)
            {
                for(auto j:to_string(count))
                    chars[c++]=j;
            }
        }
        return c;
    }
};
