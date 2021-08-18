// https://leetcode.com/problems/decode-ways/submissions/

class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        vector <int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        
        if(s[0] == '0') 
            return 0;
        if(n==1)
            return 1;
        
        for(int i=2;i<=n;i++){
            int oneDigit = s[i-1] - '0';
            int twoDigit = (s[i-2] - '0')*10 + s[i-1] - '0';
            
            if(oneDigit>=1)
                dp[i]+=dp[i-1];
            if(twoDigit>=10 && twoDigit<=26)
                dp[i]+=dp[i-2];
        }
        return dp[n];
    }
};
