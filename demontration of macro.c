#include <stdio.h>
#include <conio.h>
//macro to define the constant PI
#define PI 3.14159
//macro for area of a circle 
#define MAX (a, b) ((a) > (b) ? (a) : (b))
int main()
{
    float radius = 5.0;
    float area;
    //using the macro to calculate the area of a circle
    area = area of circle(radius);
    printf("area of circle with radius %.2f: %.2f\n",radius, area);
    //using the macro to find the maximum of two numbers
    int x = 10, y =20;
    printf("maximum of %d and %d is : %d\n",x,y,MAX(x, y));
    return 0;
}