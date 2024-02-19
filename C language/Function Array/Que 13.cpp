//13.WAP to accept 5 numbers from user and check entered number is even or odd  using of array 
#include<stdio.h>
int main()
{
	int num[5],i;
	for(i=0;i<=4;i++)
	{
		printf("\nenter number ");
		scanf("%d",&num[i]);
		if(num[i]%2==0)
		{
			printf("\num is even");
		}
		else
		{
			printf("\nnum is odd");
		}
	}
}
