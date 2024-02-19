//13.WAP to find minimum number among 3 numbers using ternary operator 
#include<stdio.h>
int main()
{
	int num1,num2,num3,min;
	printf("enter the number 1 ");
	scanf("%d",&num1);
	printf("enter the number 2 ");
	scanf("%d",&num2);
	printf("enter the number 3 ");
	scanf("%d",&num3);
	min=(num1<num2)? (num1<num3 ? num1:num2): (num2<num3 ? num2:num3);
	printf("minimum number of %d %d and %d is %d",num1,num2,num3,min);
    return 0;
}
