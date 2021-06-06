// https://leetcode.com/problems/determine-if-string-halves-are-alike/submissions/

bool halvesAreAlike(char * s){
    char *a = malloc((strlen(s)/2)*sizeof(char));
    char *b = malloc((strlen(s)/2)*sizeof(char));
    int c=0,d=0;
    for(int i=0;i<(strlen(s)/2);i++)
    {
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'|| s[i]=='O'||s[i]=='U')
      {
         c++;
      }
    }
    for(int i=(strlen(s)/2);i<(strlen(s));i++)
    {    
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'|| s[i]=='O'||s[i]=='U')
        {
           d++;
        }
    }
    if(c==d)
    {
        return true;
    }
    return false;
}
