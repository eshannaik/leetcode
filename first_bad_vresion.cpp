// https://leetcode.com/problems/first-bad-version/submissions/

class Solution {
public:
    int firstBadVersion(int n) {
        long int l=0,h=n;
        while(l<h)
        {
            long int mid=(l+h)/2;
            if(isBadVersion(mid))
                h=mid;
            if(!isBadVersion(mid))
                l=mid+1;
            if(isBadVersion(mid)!=isBadVersion(mid+1))
                return mid+1;
        }
        return 1;
    }
};
