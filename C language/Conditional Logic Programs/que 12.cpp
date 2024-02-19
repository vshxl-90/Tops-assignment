//12 .WAP to find maximum number among 3 numbers using ternary operator 
#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("enter num1 ");
	scanf("%d",&num1);
	printf("enter num2 ");
	scanf("%d",&num2);
	printf("enter num3 "); //num1 motu num2 motu num3 motu
	scanf("%d",&num3);
    max=(num1>num2) ? (num1>num3 ? num1:num3): (num2>num3 ? num2:num3); 
	printf("largest number between %d %d and %d is %d",num1,num2,num3,max);
    return 0;
}
