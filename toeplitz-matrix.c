// https://leetcode.com/problems/toeplitz-matrix/submissions/

bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize){
    int rows = matrixSize;
    int cols = *matrixColSize;
    
    for(int i=0;i<(rows-1);i++)
    {
        for(int j=1;j<cols;j++)
        {
            if(matrix[i][j-1] != matrix[i+1][j])
                return 0;
        }
    }
    return 1;
}
