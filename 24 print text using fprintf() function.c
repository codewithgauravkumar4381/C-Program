#include <stdio.h>
#include <conio.h>
int main() 
{
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) 
    {
        printf("Unable to open file.\n");
        return -1;
    }
    fprintf(file, "This is a test using fprintf.\n");
    fclose(file);   
    return 0;
}