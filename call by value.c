#include <stdio.h>
#include<conio.h>
// Function to swap two numbers using call by value
void swap(int a, int b) 
{
    int temp;
    temp = a; // Store the value of a in temp
    a = b;    // Assign the value of b to a
    b = temp; // Assign the value of temp (original a) to b
    // Print the swapped values inside the function
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}
int main() 
{
    int x, y;
    // Ask user for input
    printf("Enter two numbers:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    // Print original values
    printf("Before swap: x = %d, y = %d\n", x, y);
    // Call the swap function
    swap(x, y);
    // Print values after calling the function
    printf("After swap function: x = %d, y = %d\n", x, y);
    return 0;
}