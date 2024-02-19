//2//WAP to accept 5 numbers from user and display all numbers
#include <stdio.h>
int main() 
{
    float numbers[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i)
	{
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }
    printf("Entered numbers are:\n");
    for (int i = 0; i < 5; ++i) 
	{
        printf("%fnumber\n", numbers[i]);
    }

    return 0;
}
