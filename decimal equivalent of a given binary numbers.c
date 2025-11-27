#include<stdio.h>
#include<conio.h>
int main()
(
    long long binary;
    int decimal = 0, base = 1;  remainder;
    //input binary number 
    printf("enter a binary number ");
    scanf("%lld", &binary);
    //convert binary to decimal 
    while (binary >0)
    {
        remainder = binary %10;
        decimal +=remainder*base;
        binary /= 10;
        base*=2;
    }
     //output the decimal equivalent 
     printf("decimal equivalent: %d\n",decimal);
     getch();
)