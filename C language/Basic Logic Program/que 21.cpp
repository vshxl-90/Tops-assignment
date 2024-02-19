//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
//and without using 3rd variable
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b ");
	scanf("%d",&b);
	c=a+b; 
	a=c-a;
	b=c-a;
	printf("after swapping a is %d",a);
	printf("\nafter swapping b is %d",b);
}
