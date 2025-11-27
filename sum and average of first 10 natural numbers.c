#include<stdio.h>
#include<conio.h>
void sumandaverge(int n, int*sum, float*average)
{
    *sum = 0;
    for (int i = 1; i < n; i++)
  {
       *sum += 1; 
  }
       *average = (float)(*sum) /n;
}
    int main()
   {
    int sum;
    float average;
    int n = 10; // first 10 natural numbers
    sumandaverge(n, &sum, &average);
    printf("sum of the first %d natural numbers: %d\n",n, sum);
    printf("average of the first %d natural numbers: %.2f\n", n, average);
    getch();
   }    