//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main()
{
	int num,i;
	printf("enter a number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("(%d * %d)",i,i);
	if(i!=num)
	{
		printf("+");
	}
	
    }
}
