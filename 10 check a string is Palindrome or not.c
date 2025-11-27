#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>  
// For handling case-insensitive comparison
int isPalindrome(char str[]) 
{
    int start = 0;
    int end = strlen(str) - 1;
    // Compare characters while moving towards the center
    while (start < end) 
    {
        // Skip non-alphanumeric characters (optional for case-insensitive palindrome check)
        if (!isalnum(str[start])) 
        {
            start++;
        } 
        else if (!isalnum(str[end])) 
        {
            end--;
        } 
        else 
        {
            // Compare characters (case-insensitive)
            if (tolower(str[start]) != tolower(str[end])) 
            {
                return 0;  // Not a palindrome
            }
            start++;
            end--;
        }
    }
    return 1;  // Palindrome
}
int main() 
{
    char str[100];
    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove the newline character from the input string
    str[strcspn(str, "\n")] = '\0';
    // Check if the string is a palindrome
    if (isPalindrome(str)) 
    {
        printf("The string is a palindrome.\n");
    } 
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}