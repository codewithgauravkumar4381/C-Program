#include <stdio.h>
#include <conio.h>
struct Student 
{
    char name[50];
    int age;
    float cgpa;
};
int main() 
{
    struct Student student1 = {"John Doe", 20, 3.85};
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("CGPA: %.2f\n", student1.cgpa);   
    return 0;
}