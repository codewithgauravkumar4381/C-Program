#include <stdio.h>
#include <conio.h>
// Function to add two numbers using call by reference
void addNumbers(int *a, int *b, int *sum) 
{
    *sum = *a + *b; 
     // Dereferencing pointers to get the values and store the sum
}
int main() 
{
    int num1, num2, result;
    // Taking input for the numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Calling the function by passing addresses of num1, num2, and result
    addNumbers(&num1, &num2, &result);
    // Output the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
    return 0;
}