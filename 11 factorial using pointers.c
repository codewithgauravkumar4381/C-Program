#include <stdio.h>
#include <conio.h>
void factorial(int *num, long *fact)
{
    *fact = 1;
    for (int i = 1; i<=*num; i++)
    {
        *fact *= i;
    }
}
int main()
{
    int num;
    long fact;
    printf("enter a number: ");
    scanf("%d",&num);
    factorial(&num, &fact);
    printf("factorial: %1d\n",fact);
    return 0;
}