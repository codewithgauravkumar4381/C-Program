#include <stdio.h>
#include <conio.h>
int stringLength(char str[]) 
{
    int length = 0;
    // Loop until the null terminator is found
    while (str[length] != '\0') 
    {
        length++;
    }
    return length;
}
int main() 
{
    char str[] = "Hello, world!";
    int len = stringLength(str);
    printf("The length of the string is: %d\n", len);
    return 0;
}