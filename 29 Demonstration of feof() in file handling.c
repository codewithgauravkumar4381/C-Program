#include <stdio.h>
#include <conio.h>
int main() 
{
    FILE *file = fopen("data.txt", "r");
    char ch;
    if (file == NULL) 
    {
        printf("Unable to open file.\n");
        return -1;
    }
    while ((ch = fgetc(file)) != EOF) 
    {
        putchar(ch);
    }
    if (feof(file)) 
    {
        printf("\nEnd of file reached.\n");
    }
    fclose(file);
    return 0;
}