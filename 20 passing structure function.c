#include <stdio.h>
#include <conio.h>
struct Student 
{
    char name[50];
    int age;
};
void printStudent(struct Student s) 
{
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}
int main() 
{
    struct Student student1 = {"Alice", 22};
    printStudent(student1);   
    return 0;
}