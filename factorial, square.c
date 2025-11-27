#include<stdio.h>
#include<conio.h>
// Function to calculate the factorial of a given number
long long factorial(int num) 
{
    long long fact = 1;
    for (int i = 1; i <= num; i++) 
    {
        fact *= i;
    }
    return fact;
}
// Function to calculate the square of a given number
int square(int num) 
{
    return num * num;
}
int main() 
{
    int num;
    // Input the number
    printf("Enter the number: ");
    scanf("%d", &num);
    // Calculate and print the factorial
    printf("Factorial of %d is: %lld\n", num, factorial(num));
    // Calculate and print the square
    printf("Square of %d is: %d\n", num, square(num));
    return 0;
}