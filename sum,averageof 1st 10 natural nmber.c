#include<stdio.h>
#include<conio.h>
int main()
{
    int sum = 0;
    float average;
    //calculate the sum of the first 10 natural numbers
    for ( int i = 0; i < 10; i++)
    {
       sum += 1;
    }
       //calculate the average
       average = (float) sum / 10;
       //print the results
       printf("sum of the first 10 natural numbers:%d\n",sum);
       printf("average of the first 10 natural numbers:%.2f\n",average);
       return 0;
}