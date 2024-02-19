//4. WAP to make simple calculator (operation include
//Addition, Subtraction,Multiplication, Division, modulo)
//using conditional statement
#include <stdio.h>
int main() 
{
    char collection;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &collection);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (collection) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) 
			{
                result = num1 / num2;
            } 
            
			else 
			{
                printf("Error: Division by zero is not allowed.");
                return 1;
			}
            break;
        default:
            printf("Error: Invalid operator.");
            return 1;
    }
    printf("Result: %f", result);

    return 0;
}
