#include <stdio.h>
#include <math.h>

int main() 
{
    int num, original_num, remainder, result = 0, n = 0;
    
    // Ask the user for input
    printf("Enter the number: ");
    scanf("%d", &num);
    original_num = num;
    // First, find how many digits the number has
    while (original_num != 0) 
    {
        original_num /= 10;
        n++; // Count the number of digits
    }
    original_num = num; // Reset original_num to its original value
    // Calculate the Armstrong number
    while (original_num != 0) 
    {
        remainder = original_num % 10;  // Get the last digit
        result += pow(remainder, n);    // Raise the digit to the power of n and add to result
        original_num /= 10;             // Remove the last digit
    }
    // Check if the result is equal to the original number
    if (result == num)
    {
        printf("%d is an Armstrong number \n", num);
    } 
    else 
    {
        printf("%d is not an Armstrong number \n", num);
    }
    return 0;
}
