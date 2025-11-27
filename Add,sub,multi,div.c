#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2;
    int sum, sub, multi;
    float div;
    printf("enter the value of : ");
    scanf("%d", &num1);
    printf("enter the value of : ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("\n%d+%d=%d",num1, num2, sum);
    sub = num1 - num2;
    printf("\n%d-%d=%d",num1,num2,sub);
    multi = num1*num2;
    printf("\n %d * %d = %d", multi);
    if (num2!=0)
    {
     div = (float) num1 / num2;
     printf("\n%d / %d = %.2f", num1, num2, div);
    }
    else
    {
        printf("\n division by zero is not allowed");
    }
    return 0;
}