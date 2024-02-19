//23.WAP to calculate swap 2 numbers with using of multiplication and division
#include<stdio.h>
main()
{
	int a,b; 
	
	printf("enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b ");
	scanf("%d",&b);
	a=a*b; 
	a=a/b; 
	b=a/b; 
	printf("\nafter the swap a is %d",a);
	printf("\nafter the swap b is %d",b);
	
	return 0;
	
}
