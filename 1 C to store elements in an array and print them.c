#include <stdio.h>
#include <conio.h>
int main() 
{
    int n;
    // Ask user for the number of elements to store
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n]; // Declare an array of size n
    // Get the elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Print the elements of the array
    printf("\nThe elements in the array are:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}