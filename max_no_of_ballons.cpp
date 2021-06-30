//https://leetcode.com/problems/maximum-number-of-balloons/submissions/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map <char,int> m;
        for(int i=0;i<text.length();i++)
        {
            m[text[i]]++;
        }
        return min (m['b'],min(m['a'],min(m['l']/2,min(m['o']/2,m['n']))));
    }
};
