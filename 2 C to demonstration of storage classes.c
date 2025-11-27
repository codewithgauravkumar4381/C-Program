#include <stdio.h>
#include <conio.h>
// External variable declaration
extern int externVar;
// Static variable definition
static int staticVar = 0;
void demoAutoAndRegister() 
{
    // Auto variable (local, default storage class)
    auto int autoVar = 10;
    // Register variable (faster access, but can't take address)
    register int regVar = 20;
    // Increment the values of auto and register variables
    autoVar++;
    regVar++;
    printf("Inside demoAutoAndRegister() function:\n");
    printf("autoVar = %d\n", autoVar);
    printf("regVar = %d\n", regVar);
}
void demoStatic() 
{
    // Static variable (retains its value between function calls)
    static int callCount = 0;
    callCount++;
    printf("Inside demoStatic() function, staticVar = %d, callCount = %d\n", staticVar, callCount);
    staticVar++;
}
int main() 
{
    // External variable (defined elsewhere)
    externVar = 100;
    printf("In main() function:\n");
    printf("externVar = %d\n", externVar);
    demoAutoAndRegister(); // Calling the function that uses auto and register variables
    demoStatic();          // Calling the static variable demo function
    demoStatic();          // Calling again to demonstrate static variable persistence   
    return 0;
}
// Definition of the extern variable
int externVar;