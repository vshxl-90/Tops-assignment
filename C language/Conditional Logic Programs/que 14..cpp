//14.WAP to find the largest of three numbers.
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter the value of a ");
	scanf("%d",&a);
	
	printf("enter the value of b ");
	scanf("%d",&b);
	
	printf("enter the value of c ");
	scanf("%d",&c);
	
	if(a==b==c)
	{
		printf("all value are same");
	}
	else if(a>b || a>c)
	{
		printf("value of a is largest");
	}
	else if(b>c)
	{
		printf("value of b is largest");
	}
	else 
	{
		printf("value of c is largest");
	}
	return 0;
}
