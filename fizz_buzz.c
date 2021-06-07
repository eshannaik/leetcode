// https://leetcode.com/problems/fizz-buzz/submissions/

char ** fizzBuzz(int n, int* returnSize){
    *returnSize=n;
    char **temp = (char**)malloc(sizeof(char*)*n);
    for (int i = 0; i < n; i++) {
        temp[i] = (char*)malloc(sizeof(char) * 9); 	
    }
    for(int i=1;i<=n;i++)
    {
        if((i%3==0) && (i%5==0))
        {
            strcpy(&temp[i-1][0],"FizzBuzz");
        }
        else if(i%3==0)
        {
            strcpy(&temp[i-1][0],"Fizz");
        }
        else if(i%5==0)
        {
            strcpy(&temp[i-1][0],"Buzz");
        }
        else
        {
            sprintf(&temp[i-1][0],"%i",i);
        }
    }
    return &temp[0];
}
