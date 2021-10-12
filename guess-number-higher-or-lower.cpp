// https://leetcode.com/problems/guess-number-higher-or-lower/submissions/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1;
        int r=n;
        
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            // cout << mid << " " << guess(mid) << endl;
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)==1)
                l=mid+1;
            else
                r=mid-1;
        }
        return 1;
    }
};
