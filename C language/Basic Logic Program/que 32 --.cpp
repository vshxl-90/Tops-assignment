//32. Accept 2 numbers and find out its sum check it size
#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Print the sum
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    // Check the size of the sum variable
    printf("Size of the sum variable: %lu bytes\n", sizeof(sum));

    return 0;
}

