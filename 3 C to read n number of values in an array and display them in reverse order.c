#include <stdio.h>
#include <conio.h>
int main() 
{
    int n;
    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n]; // Declare an array of size n
    // Read elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Display the elements in reverse order
    printf("\nThe elements in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}