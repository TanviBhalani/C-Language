#include <stdio.h>

averageOf2DArray(int arr[][3], int rows, int cols) 
{
    int sum = 0;
    int totalElements = rows * cols;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            sum += arr[i][j];
        }
    }
    return (float)sum / totalElements;
}

int main() {
    int rows, cols;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    float average = averageOf2DArray(arr, rows, cols);
    printf("Average of an Array: %.2f\n", average);
    
}
