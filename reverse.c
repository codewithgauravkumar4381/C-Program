#include <stdio.h>

// Function to reverse the number
int reverse_number(int num) {
    int reversed_num = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    return reversed_num;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed_num = reverse_number(num);
    printf("The reverse of %d is: %d\n", num, reversed_num);
    return 0;
}