// https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/submissions/

int o=0,z=0,maxo=0,maxz=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==49)
            {
                o++;
                if(o>maxo)
                    maxo=o;
                z=0;
            }
            if(s[i]==48)
            {
                z++;
                if(z>maxz)
                    maxz=z;
                o=0;
            }
        }
        if(maxo>maxz)
            return true;
        else
            return false;

// https://leetcode.com/problems/max-consecutive-ones/

int max=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                c++;
                if(c>max)
                    max=c;
            }
            else
                c=0;
        }
        return max;
