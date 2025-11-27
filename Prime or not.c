#include<stdio.h>
#include<conio.h>
int main()
{
    int num, i, isprime = 1;
    printf("enter a number= ");
    scanf("%d", &num);
    (num <=1);
    {
        isprime = 0
    }
    else
    {
        for (i=2; i <= num/2; i++)
        {
          if (num% i==0)
          {
            isprime = 0;
            break;
          }
        }
    }
        
        if (isprime)
        {
            printf("%d is a prime number \n",num);
        }
        else
    {
        printf("%d is not a prime num \n", num);
    }
     getch();
}