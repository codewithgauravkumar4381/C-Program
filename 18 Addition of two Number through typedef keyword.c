#include <stdio.h>
#include <conio.h>
typedef int Number;
int main() 
{
    Number num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum = %d\n", sum);   
    return 0;
}