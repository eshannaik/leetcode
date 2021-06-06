// https://leetcode.com/problems/determine-color-of-a-chessboard-square/submissions/

bool squareIsWhite(char * coordinates){
    if (coordinates[1]%2 == 0)
    { 
        if(coordinates[0]=='a'||coordinates[0]=='c'||coordinates[0]=='e'||coordinates[0]=='g')
            return true;
        else
            return false;
    }
    else
    {
        if(coordinates[0]=='a'||coordinates[0]=='c'||coordinates[0]=='e'||coordinates[0]=='g')
            return false;
        else
            return true;
    }
    return 0;
}


// alternate method
bool squareIsWhite(char * coordinates){
  return ((((int)(coordinates[1])-48)+coordinates[0])%2==0?false:true);
}
