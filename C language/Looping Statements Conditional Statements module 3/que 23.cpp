//23. C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main()
{
	int num,reverse,remainder;
	printf("enter a number ");
	scanf("%d",&num);
	for(;num!=0;num=num/10)
	{
	    remainder=num%10;
	    reverse=reverse*10+remainder;
	    
	}
	printf("reverse is %d",reverse);
    return 0;
}
