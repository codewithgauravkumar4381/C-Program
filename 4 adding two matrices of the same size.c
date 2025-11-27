#include <stdio.h>
#include <conio.h>
#define MAX_ROWS 3
#define MAX_COLS 3
void addMatrices(int matrix1[MAX_ROWS][MAX_COLS], int matrix2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS]) 
{
    for (int i = 0; i < MAX_ROWS; i++) 
    {
        for (int j = 0; j < MAX_COLS; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void printMatrix(int matrix[MAX_ROWS][MAX_COLS]) 
{
    for (int i = 0; i < MAX_ROWS; i++) 
    {
        for (int j = 0; j < MAX_COLS; j++) 
        {
          printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    int matrix1[MAX_ROWS][MAX_COLS] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrix2[MAX_ROWS][MAX_COLS] = 
    {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int result[MAX_ROWS][MAX_COLS];
    addMatrices(matrix1, matrix2, result);
    printf("Resultant Matrix after Addition:\n");
    printMatrix(result);
    return 0;
}