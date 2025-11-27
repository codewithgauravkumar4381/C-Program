#include <stdio.h>
#include <math.h>
// Function to calculate x^y
double power(double x, int y) 
{
    return pow(x, y);
}
int main() 
{
    double x;
    int y;
    // Input the base and exponent
    printf("Enter the base (x): ");
    scanf("%lf", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);
    // Calculate and print the result
    printf("%.2lf raised to the power of %d is: %.2lf\n", x, y, power(x, y));
    return 0;
}