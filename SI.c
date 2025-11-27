#include<stdio.h>
#include<conio.h>
void maoin ()
{
    int pa; //Principle Amount
    float r; //Rate
    float t; //Time
    float si; //Simple Interest
    printf("enter the Principle Amoubnt= ");
    scanf("%d",&pa);
    printf("enter the value of Rate=  ");
    scanf("%d",&r);
    printf("enter the time= ");
    scanf("%d", &t);
    si= (pa*r*t)/100;
    printf("\n print Simple Interest");
    printf("%f",si);
    getch();
}