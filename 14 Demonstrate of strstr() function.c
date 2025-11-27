#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() 
{
    char str1[] = "This is a simple example.";
    char str2[] = "simple";
    char *result = strstr(str1, str2);
    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found.\n");
    return 0;
}