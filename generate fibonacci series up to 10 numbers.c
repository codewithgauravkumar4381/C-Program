#include <stdio.h>
#include <conio.h>
// Function to generate Fibonacci series
void generateFibonacci(int n) 
{
    int num1 = 0, num2 = 1, nextNum;
    printf("Fibonacci series up to %d numbers:\n", n);
    printf("%d, %d, ", num1, num2);
    for (int i = 3; i <= n; i++) {
        nextNum = num1 + num2;
        printf("%d, ", nextNum);
        num1 = num2;
        num2 = nextNum;
    }
}
int main() 
{
    int n = 10; // Change this value to generate more or less numbers
    generateFibonacci(n);
    return 0;
}