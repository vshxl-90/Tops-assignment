//19.Write a program in C to calculate and print the electricity bill of a given 
//customer. The customer ID, name, and unit consumed by the user should 
//be captured from the keyboard to display the total amount to be paid to the 
//customer. The charge are as follow :
//20. Unit 21. Charge/unit
//22. upto 350 23. @1.20
//24. 350 and above but less than 600 25. @1.50
//26. 600 and above but less than 800 27. @1.80
//28. 800 and above 29. @2.00*/
#include<stdio.h>
int main()
{
	int name;
	float customer_id,unit;
	printf("enter the customer id ");
	scanf("%f",&customer_id);
	printf("enter name ");
	scanf("%d",&name);
	printf("enter the unit consumed by customer ");
	scanf("%f",&unit);
	if(unit>350)
	{
		printf("per unit charge is 1.20 rs ");
	}
	else if(unit>=350 && unit<600)
	{
		printf("per unit charge is 1.50 rs");
	}
	else if(unit>=600 && unit<800)
	{
		printf("per unit charge is 1.80 rs");
	}
	else
	{
		printf("per unit charge is 2.00 rs");
	}
	return 0;
}
