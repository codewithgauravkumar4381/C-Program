#include<stdio.h>
#include<conio.h>
// Function to change lowercase to uppercase and vice versa
char toggleCase(char ch) 
{
    if (ch >= 'a' && ch <= 'z') 
    {
        // Convert lowercase to uppercase
        return ch - 'a' + 'A';
    } else if (ch >= 'A' && ch <= 'Z') 
    {
        // Convert uppercase to lowercase
        return ch - 'A' + 'a';
    }
    // Return the character as is if it's neither uppercase nor lowercase
    return ch;
}
int main() 
{
    char input;
    // Ask user for input
    printf("Enter a character: ");
    scanf("%c", &input);
    // Display the character before and after case change
    printf("Original character: %c\n", input);
    printf("Toggled character: %c\n", toggleCase(input));
    return 0;
}