#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() 
{
    int *arr, n = 5;
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return -1;
    }
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);  
        // Will print 0s, as calloc initializes to 0
    }
    free(arr);
    return 0;
}