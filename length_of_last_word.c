// https://leetcode.com/problems/length-of-last-word/submissions/

int lengthOfLastWord(char * s){
    int c=0;
    for (int i=strlen(s)-1;i>=0;i--)
    {
        if (s[i]==' ')
        {
            if(c==0)
                continue;
            else
                break;
        }
        c++;
    }   
    return c;
}
