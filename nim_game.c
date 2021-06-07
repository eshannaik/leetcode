// https://leetcode.com/problems/nim-game/submissions/

bool canWinNim(int n){
    if(n>3)
    {
        if(n%4 == 0)
            return false;
        else
            return true;
    }
    else return true;
}
