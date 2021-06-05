//https://leetcode.com/problems/find-the-highest-altitude/submissions/


int largestAltitude(int* gain, int gainSize){
    int diff = 0,max=0;
    int *temp = malloc((gainSize+1) *(sizeof(int)));
    temp[0]=0;
    temp[1]=gain[0];
    for (int i=0;i<(gainSize-1);i++)
    {
        temp[i+2] = temp[i+1]+gain[i+1];
    }
    for(int i=0;i<(gainSize+1);i++)
    {
        if(temp[i]>max)
            max=temp[i];
    }
    return max;
}
