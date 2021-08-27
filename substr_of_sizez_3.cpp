// https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/submissions/

class Solution {
public:
    int countGoodSubstrings(string s) {
        map <char,int> res;
        int c=0;
        int count=0;
        if(s.length()<3)
            return 0;
        for(int i=0;i<s.length()-2;i++)
        {
            string w = s.substr(i,3);
            for(auto x:w)
            {
                if(res.find(x)==res.end())
                    res[x]=1;
                else
                    res[x]++;
            }
            for(auto x:res)
            {
                if(x.second==1)
                    c++;
            }
            if(c==3){
                count++;
            }
            c=0;
            res.clear();
        }
        return count;
    }
};
