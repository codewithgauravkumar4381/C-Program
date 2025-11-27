#include <stdio.h>
#include<conio.h>
// Recursive function to print numbers from 1 to n
void printSeries(int n) 
{
    if (n > 0) 
    {
        printSeries(n - 1); // Recursive call
        printf("%d ", n);    // Print the current number
    }
}

int main() 
{
    int n = 5; // Define the upper limit of the series
    printf("Series from 1 to %d: ", n);
    printSeries(n); // Call the recursive function
    printf("\n"); // Print a newline at the end
    return 0;
}