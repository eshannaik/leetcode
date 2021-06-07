// https://leetcode.com/problems/arranging-coins/submissions/

int arrangeCoins(int n){
    double x = -1 + sqrt(1+8*(double)n);
    x/=2;
    return x;
}
