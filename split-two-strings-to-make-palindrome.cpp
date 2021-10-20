// https://leetcode.com/problems/split-two-strings-to-make-palindrome/submissions/

class Solution {
public:
    bool isPa(string w,int i,int j)
    {
        // cout << w << i << j << endl;
        while(i<j)
        {
            if(w[i]!=w[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool check(string a,string b)
    {
        // cout << a << " " << b << endl;
        int i=0;
        int j=b.length()-1;
        
        while(i<j)
        {
            if(a[i]!=b[j])
                break;
            i++;
            j--;
        }
        return isPa(a,i,j) || isPa(b,i,j);
    }
    bool checkPalindromeFormation(string a, string b) {
        if(check(a,b) || check(b,a))
                return true;
        return false;
    }
};
