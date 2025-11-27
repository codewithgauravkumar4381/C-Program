#include <stdio.h>
#include <conio.h>
int main() 
{
    printf("Even numbers from 1 to 40:\n");
    for (int i = 1; i <= 40; i++) 
    {
        if (i % 2 == 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("Odd numbers from 1 to 40:\n");
    for (int i = 1; i <= 40; i++) 
    {
        if (i % 2 != 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}