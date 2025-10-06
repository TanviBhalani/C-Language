#include <stdio.h>

int main() {
    int rowSize = 3;
    int colSize = 3;
    int a[3][3] = {{2, 4, 1}, {3, 5, 4}, {8, 2, 6}};
    int i, j;
    int transpose[3][3];

    
    for (i = 0; i < rowSize; i++) 
    {
        for (j = 0; j < colSize; j++) 
        {
            transpose[j][i] = a[i][j];
        }
    }

    
    printf("Original Matrix:\n");
    for (i = 0; i < rowSize; i++) 
    {
        for (j = 0; j < colSize; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix:\n");
    for (i = 0; i < colSize; i++) 
    {
        for (j = 0; j < rowSize; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

}