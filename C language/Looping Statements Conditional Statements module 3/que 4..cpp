// 4 WAP to print table up to given numbers
#include<stdio.h>
int main()
{
	int i,num;
	printf("enter a num that you need multiplication ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",num,i,num*i);
	}
	return 0;
}
