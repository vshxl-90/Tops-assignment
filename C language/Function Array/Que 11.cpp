//11.WAP to accept 5 numbers from user and display in reverse order using for loop and array
#include<stdio.h>
main()
{
	int num[5],i;
	printf("enter number ");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("\nreverse is below");
	for(i=4;i>=0;i--)
	{
		printf("\n%d",num[i]);
	}
}
