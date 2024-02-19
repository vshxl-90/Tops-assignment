//10.Write a program you have to make a summation of first and last Digit. (E.g.,
//1234 Ans: -5)
#include<stdio.h>
int main()
{
	int num,modulo,div,r;
	printf("enter a number ");
	scanf("%d",&num);
	modulo=num%10;
	printf("last digit is %d",modulo);
	while(num!=0)
	{
		r=num%10;
		num=num/10;
		
	}
	printf("\nfirst digit is %d",r);
   
	return 0;
}
