#include<stdio.h>

main(){

    int rowSize = 3;
    int colSize = 3;
    int a[3][3] = {{2, 7, 1}, {3, 5, 4}, {8, 9, 6}};
    int i, j;
    int maxElement = a[0][0];

    for (i = 0; i < rowSize; i++) 
    {
        for (j = 0; j < colSize; j++) 
        {
            if (a[i][j] > maxElement) 
            {
                maxElement = a[i][j];
            }
        }
    }

    printf("The largest element in the 2D array is: %d\n", maxElement);

}