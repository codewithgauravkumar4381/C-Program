#include<stdio.h>
#include<conio.h>
int main() 
{
    int number;
    // do-while loop
    do {
        // Prompt user for input
        printf("Enter a number (enter 0 to exit): ");
        scanf("%d", &number);
        // Display the entered number
        if (number != 0) 
        {
            printf("You entered: %d\n", number);
        }
    } while (number != 0); // condition to exit the loop
    printf("Exiting the program.\n");
    return 0;
}
