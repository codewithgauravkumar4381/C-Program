#include <stdio.h>
#include <conio.h>
int main() 
{
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) 
    {
        printf("Unable to open file.\n");
        return -1;
    }
    fprintf(file, "Hello, this is a test file.\n");
    fclose(file);
    printf("Data written to file successfully.\n");   
    return 0;
}