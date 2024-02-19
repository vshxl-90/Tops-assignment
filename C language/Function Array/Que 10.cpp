//10.WAP to perform Palindrome number using loop and function 
#include<stdio.h>
int palidrom();
int main()
{
	palidrom();
}

int palidrom()
{
	int num,i,r=0;
	printf("enter number ");
	scanf("%d",&num);
	int orie=num;
	while(num!=0)
	{
		r=(r*10)+(num%10);
		num=num/10;
	}
	printf("reverse is %d",r);
	if(orie==r)
	{
		printf("\npalindrome");
	}
	else
	{
		printf("\n not palindrome");
	}
}
