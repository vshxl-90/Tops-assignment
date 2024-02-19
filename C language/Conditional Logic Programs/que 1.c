//1 Write a C program to accept two integers and check whether they are equalor not
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter 1st integers :");
	scanf("%d",&num1);
	
	printf("Enter 2nd integers :");
	scanf("%d",&num2);
	
	if(num1==num2)
	{
		printf("value is equal ");
	}
	else 
	{
		printf("value is not equl");
	}
	return 0;
}
