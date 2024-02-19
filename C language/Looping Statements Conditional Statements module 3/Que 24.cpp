//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main()
{
	int i,num;
	printf("enter a number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d",i);
		
	    if(i!=num)
	{
		printf("+");
	}
	
    }
}
