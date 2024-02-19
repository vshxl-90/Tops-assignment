//9 Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("enter the number for sum of digit ");
	scanf("%d",&num);
	while(num!=0)
	{
		sum=sum+(num%10);
		num=num/10;
		
	}
	printf("sum of digit is %d",sum);
    return 0;
}
