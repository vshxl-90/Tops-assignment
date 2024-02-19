//13.calculate the Factorial of a Given Number using while loop
#include<stdio.h>
int main()
{
	
	int f=1,i=1,num,temp;
	printf("enter the number ");
	scanf("%d",&num);
	temp=num;
	while(num>=i) 
	{
	 f=f*num;
	 num--;
    } 
	printf("factorial of %d is %d",temp,f);
    return 0;
}

