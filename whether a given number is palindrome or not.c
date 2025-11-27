#include <stdio.h>
#include <conio.h>
int main ()
{
    int num, reversedNum = 0,remainder, originalNum;
    //input the number from the user
    printf("enter on integer: ");
    scanf("%d",&num);

    originalNum = num;

    //reverse the number 
    while (num != 0)
    {
        remainder = num% 10;
        reversedNum = reversedNum* 10 + remainder;
        num/= 10;
    }
    
    //cheak if the original number is equal to the reversed number 
    if (originalNum == reversedNum)
    {
        printf("%d is a polindrome number.\n",originalNum);
    }
    else
     {
       printf("%d is not a polindrome number.\n",originalNum);
     }
     return 0;
}