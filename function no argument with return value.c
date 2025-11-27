#include<stdio.h>
#include<conio.h>
//function declaration
int getnumber();
int main()
{
    //call thhe function and store the reyurn value
    int number = getnumber();
    //print the return value
    printf("the number is: %d\n",number);
    return 0;
}
//function definition
int getnumber()
{
    return42;// return a fixed value
}