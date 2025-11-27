#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 3  
// Define the size of the square matrix
void multiplyMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE]) 
{
    for (int i = 0; i < MAX_SIZE; i++) 
    {
        for (int j = 0; j < MAX_SIZE; j++) 
        {
            result[i][j] = 0; 
            // Initialize result element
            for (int k = 0; k < MAX_SIZE; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j]; 
                // Multiply and add
            }
        }
    }
}
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE]) 
{
    for (int i = 0; i < MAX_SIZE; i++) 
    {
        for (int j = 0; j < MAX_SIZE; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    int matrix1[MAX_SIZE][MAX_SIZE] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrix2[MAX_SIZE][MAX_SIZE] = 
    {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int result[MAX_SIZE][MAX_SIZE];
    // Multiply matrices
    multiplyMatrices(matrix1, matrix2, result);
    // Print the result
    printf("Resultant Matrix after Multiplication:\n");
    printMatrix(result);
    return 0;
}