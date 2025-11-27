#include <stdio.h>
#include <conio.h>
struct Student 
{
    char name[50];
    int roll;
    float cgpa;
};
int main() 
{
    FILE *file = fopen("students.txt", "w");
    struct Student student;
    if (file == NULL) 
    {
        printf("Unable to open file.\n");
        return -1;
    }
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    printf("Enter CGPA: ");
    scanf("%f", &student.cgpa);
    fprintf(file, "Name: %s\nRoll: %d\nCGPA: %.2f\n", student.name, student.roll, student.cgpa);
    fclose(file);
    return 0;
}