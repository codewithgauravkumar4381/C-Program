#include <stdio.h>
#include <conio.h>
int main() 
{
    int x = 10;  
    // Declare an integer variable
    int *ptr;    
    // Declare a pointer to an integer
    ptr = &x;  
    // Using '&' to store the address of 'x' in 'ptr'
    // Now, 'ptr' points to the memory location of 'x'
    printf("Value of x: %d\n", x);               
    // Output: 10
    printf("Address of x: %p\n", (void*)&x);      
    // Output: Address of 'x'
    printf("Value stored at ptr (Dereferencing): %d\n", *ptr); 
    // Output: 10
    printf("Address stored in ptr: %p\n", (void*)ptr);  
    // Output: Address of 'x'
    // Modifying the value of 'x' using the pointer
    *ptr = 20; 
    // Dereferencing 'ptr' and changing the value of 'x' through the pointer
    printf("\nAfter changing value through pointer:\n");
    printf("New value of x: %d\n", x);             
    // Output: 20
    printf("Value at ptr: %d\n", *ptr);            
    // Output: 20
    return 0;
}