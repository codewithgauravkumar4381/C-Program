#include<stdio.h>
#include<conio.h>
//funcation to calculate the area of a circle
float calculatecirclearea(float radius)
{
    return M_PI * pow(radius, 2);
}
  int main()
{
    float radius, area;
    //input the radius of the circle
    printf("enter the radius of the circle: ");
    scanf("%f",&radius);
    //calculate the area of the circle 
    area = calculatecirclearea(radius);
    //display the result
    printf("the area of the circle is: %.2f\n",area);
    return 0;
}