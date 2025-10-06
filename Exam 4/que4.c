#include <stdio.h>
main() {

    int row = 3, col = 3, sumRow = 0, sumCol = 0;
    int a[3][3] = {{2,7,1},{3,5,4},{8,9,6}};
    
    for ( int i = 0; i < row; i++) 
    {
        
        for (int j = 0; j < col; j++) 
        {

        }
    }
    int rowIndex = 0;
    int colIndex = 2;
    
    for (int j = 0; j < col; j++) 
    {
        sumRow += a[rowIndex][j];
    }
    
    for (int i = 0; i < row; i++) 
    {
        sumCol += a[i][colIndex];
    }

    printf("Sum of elements in row %d: %d\n", rowIndex, sumRow);
    printf("Sum of elements in column %d: %d\n", colIndex, sumCol);

}

