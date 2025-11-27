#include <stdio.h>
#include <conio.h>
int main() 
{
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) 
    {
        printf("Unable to open file.\n");
        return -1;
    }
    fseek(file, 5, SEEK_SET);  // Move file pointer to position 5
    char ch = fgetc(file);
    printf("Character at position 5: %c\n", ch);
    fclose(file);   
    return 0;
}