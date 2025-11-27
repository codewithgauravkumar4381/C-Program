#include <stdio.h>
#include <conio.h>
int main() 
{
    FILE *file = fopen("example.txt", "r");
    char str[100];
    if (file == NULL) 
    {
        printf("Unable to open file.\n");
        return -1;
    }
    fscanf(file, "%s", str);
    printf("Read from file: %s\n", str);
    fclose(file);
    return 0;
}