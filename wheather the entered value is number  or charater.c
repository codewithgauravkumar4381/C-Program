#include<stdio.h>
#include<conio.h>
void checkinput(char input)
{
    if (isdigit(input))
    {
      printf("the entered value '%c' is a number.\n",input);
    }
       else if (isalpha(input))
    {
        printf("the entered value '%c' is a character.\n",input);
    } 
     else
    {
       printf("the entered value '%c' is neither a number nor a character.\n",input); 
    }
}
    int main()
    {
        char input;
        printf("enter a single character: ");
        scanf("%c",&input);
        checkinput(input);
        getch();
    }