// https://leetcode.com/problems/number-of-segments-in-a-string/submissions/

int countSegments(char * s){
    int c=0;
    if(strlen(s)==0)
        return 0;
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i] != ' ') && ((s[i+1] == ' ')||(s[i+1]=='\0')))
            c++;
    }
    return c;
}
