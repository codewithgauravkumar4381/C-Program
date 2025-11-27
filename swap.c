#include<stdio.h>
#include<conio.h>
void main ()
{
    int num1,num2 ,temp;
    printf("enter the value of number 1 ");
    scanf("%d",num1);
    printf("enter the value of number 2 ");
    scanf("%d",num2);
    printf("print the value of num1 and num2 before swapping =%d%d", num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("print the value of num1 and num2 swapping = %d%d", num1,num2);
    getch();
}