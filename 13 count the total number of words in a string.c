#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int countWords(char str[]) 
{
    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (isspace(str[i])) 
        {
            inWord = 0;  
            // If space, we're outside a word
        } else if (!inWord) 
        {
            inWord = 1;  
            // If not space, start a new word
            count++;
        }
    }
    return count;
}
int main() 
{
    char str[] = "This is a test string.";
    int wordCount = countWords(str);
    printf("Number of words: %d\n", wordCount);
    return 0;
}