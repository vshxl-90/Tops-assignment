//17//Calculate person’s insurance premium based on salary
#include<stdio.h>
int main()
{
	float salary,premium;
	
	printf("enter salary ");
	scanf("%f",&salary);
	
	premium=(salary*10)/100;
	
	printf("premium is %f",premium);
    return 0;
}
