#include<stdio.h>
#include<conio.h>
//function definition with arguments and a return value
int add(int a, int b)
{
    return a+b;
}
 int main()
 {
    int result;
    //calling the function with arguments and strong the return value
    result = add(5,3);
    //printing the result 
    printf("the sum is: %d\n",result);
    return 0;
 }