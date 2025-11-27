#include<stdio.h>
#include<conio.h>
int main() 
{
    char operator;
    double num1, num2;
    // Ask the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    // Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    // Use switch case to perform operations based on the operator
    switch (operator) 
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) 
            {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } 
            else 
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }
    getch();
}