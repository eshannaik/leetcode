// https://leetcode.com/problems/first-unique-character-in-a-string/submissions/

int firstUniqChar(char * s){
    int c=0,l;
    l=strlen(s);
    if(l==1)
        return 0;
    for (int i =0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(s[i]==s[j])
                c++;
            if(c>1)
                break;
        }
        if(c==1)
            return i;
        c=0;
    }
    return -1;
}
