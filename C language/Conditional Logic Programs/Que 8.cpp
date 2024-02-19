//8. WAP to accept the height of a person in centimeters and
//categorize theperson according to their height.
#include <stdio.h>
int main() 
{
    float height;

    printf("Enter the height : ");
    scanf("%f", &height);

    if (height < 150.0) 
	{
        printf("Person is Short.");
    }
	else if (height >= 150.0 && height < 170.0) 
	{
        printf("Person is of Average Height.");
    } 
	else 
	{
        printf("Person is Tall.");
    }

    return 0;
}
