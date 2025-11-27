#include <stdio.h>
#include <conio.h>
int main() 
{
    int var = 10;
    int *ptr = &var;  
    // Pointer 'ptr' holds the address of 'var'
    printf("Value of var: %d\n", var);       
    // Output: 10
    printf("Address of var: %p\n", &var);    
    // Output: Address of 'var'
    printf("Value pointed to by ptr: %d\n", *ptr);  
    // Output: 10
    printf("Address stored in ptr: %p\n", ptr);     
    // Output: Address of 'var'
    return 0;
}