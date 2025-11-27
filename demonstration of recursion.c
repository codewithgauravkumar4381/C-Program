#include<stdio.h>
#include<conio.h>
//funtion to calculate factorial
int factorial(int n)
{
    //base case if n is 0 or 1,return 1
    if (n == 0|| n == 1)
    {
        return 1;
    }
    else
    {
        //recursive case: n* factorial of (n-1)
        return n* factorial(n-1);
    }
}
int main()
{
    int num;
    //ask user for input
    printf("Enter a number: ");
    scanf("%d",&num);
    //calling the factorial function and displaying the result
    printf("factorial of %d is: %d\n",num,factorial(num));
    return 0;
}