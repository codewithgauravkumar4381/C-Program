#include<stdio.h>
#include<conio.h>
//function the calculate factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i<=n;i++)
    {
        fact*= i;
    }
     return fact;
}
int main()
{
    int num;
    //ask the user to enter the number 
    printf("enter a number: ");
    scanf("%d",&num);
    //cheak if the number is negative 
    if (num<0)
    {
        printf("factorial is not defined for negative number.\n");
    }
    else
    {
        //call the factorial function and print the result 
        printf("factorial of %d is: %d\n",num,factorial(num)); 
    }
    return 0;
}