#include<stdio.h>
#include<conio.h>
//funcation to print the table of a given number 
void printtable(int num, int limit)
{
    for ( int i = 0; i <= limit; i++)
    {
       printf("%d * %d = %d\n", num, i, num * i); 
    }
}
  int main()
{
    int num, limit;
    //input the number and limit 
    printf("enter the number: ");
    scanf("%d",&num);
    printf("enter the limit: ");
    scanf("%d", &limit);
    //print the table 
    printf("table of %d:\n",num);
    printtable(num, limit);
    return 0;
}  