//16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main()
{
	int num[5],i,sum=0;
	printf("enter number ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	
	printf("sum is %d",sum);
}
