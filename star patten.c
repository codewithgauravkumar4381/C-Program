#include<stdio.h>
#include<conio.h>
// Function to print the star pattern
void printStarPattern(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) 
        {
            printf("*");
        }
        printf("\n");
    }
}
int main() 
{
    int n = 5; // Change this value to print a different size pattern
    printStarPattern(n);
    return 0;
}