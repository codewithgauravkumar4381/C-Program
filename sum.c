#include<stdio.h>
#include<conio.h>
int a;
int b;
int c;
int sum;
void main()
{
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the vale of b =  ");
    scanf("%d",&b);
    printf("enter the vlue of c = ");
    scanf("%d",&c);
    sum = a+b+c;
    printf("\n RESULT= ");
    printf("%d",sum);
    getch();
}