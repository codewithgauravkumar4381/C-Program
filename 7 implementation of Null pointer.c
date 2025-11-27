#include <stdio.h>
#include <stddef.h>  
// for NULL definition
int main() 
{
    int *ptr = NULL;  
    // Initialize pointer to NULL
    if (ptr == NULL) 
    {
        printf("The pointer is NULL.\n");
    }
     else 
    {
        printf("The pointer is not NULL.\n");
    }
    return 0;
}