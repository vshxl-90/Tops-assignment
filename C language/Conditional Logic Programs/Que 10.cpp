//10.WAP to check whether a number is negative, positive or zero
#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the value:");
	scanf("%d",&num);
	
	if(num<0) 
	{
		if(num==0) 
		{
			printf("number is  zero .");
		}
		else
		{
			printf("number is negative .");
		}
	}
	else 
	{
		printf("number is positive .");
	}
	return 0;
}
