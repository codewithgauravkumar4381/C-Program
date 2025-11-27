#include <stdio.h>
#include<conio.h>
int main() 
{
    int year;
    // Ask the user for input
    printf("Enter a year: ");
    scanf("%d", &year);
    // Check if the year is a leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
    {
        printf("%d is a leap year.\n", year);
    } else 
    {
        printf("%d is not a leap year.\n", year);
    }
    getch();
}