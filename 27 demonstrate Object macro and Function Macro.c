#include <stdio.h>
#include <conio.h>
#define SQUARE(x) ((x) * (x))  
// Function macro
#define PI 3.14159  
// Object macro
int main() 
{
    int num = 5;
    printf("Square of %d: %d\n", num, SQUARE(num));
    printf("Value of PI: %.5f\n", PI);
    return 0;
}