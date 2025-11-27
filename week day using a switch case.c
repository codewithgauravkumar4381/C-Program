#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter your choice= ");
    scanf("%d",&a);
    switch (a)
    {
     case 1:
     printf("MONDAY");   
        break;
     case 2:
     printf("TUESDAY");
     break;
     case 3:
     printf("WEDNESDAY");
     break;
     case 4:
     printf("THESDAY");
     break;
     case 5:
     printf("FRIDAY");
     break;
     case 6:
     printf("SATURDAY");
     break;
     case 7:
     printf("SUNDAY");
     break;
     default:
     printf ("wrong choice ");
    }
     getch();
}