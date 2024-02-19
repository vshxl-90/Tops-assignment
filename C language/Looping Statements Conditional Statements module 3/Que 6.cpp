//6. WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
	int i,num,num1=0,num2=1,num3;
	printf("enter a number ");
	scanf("%d",&num);
	
	printf("\n %d  %d ",num1,num2);
	for(i=1;i<=num;i++)
	{
		num3=num1+num2;
		printf(" %d ",num3);
		num1=num2;
		num2=num3;
	}
	return 0;
}
