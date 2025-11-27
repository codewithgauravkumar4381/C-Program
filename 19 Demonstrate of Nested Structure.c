#include <stdio.h>
#include <conio.h>
struct Address 
{
    char street[100];
    char city[50];
};
struct Person 
{
    char name[50];
    int age;
    struct Address address;  // Nested structure
};
int main() 
{
    struct Person person1 = {"John Doe", 30, {"123 Main St", "New York"}};
    
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s, %s\n", person1.address.street, person1.address.city);

    return 0;
}