//14 .Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
int main()
{
	int num,i;
	for(i=1;i<=5;i++)

	{
		int f=1;
		printf("\nenter %d num ",i);//3
		scanf("%d",&num);
		int ori=num;
		while(num!=0)
		{
			f=f*num;//f=3 f=6 f=6
			num--;//num=2 num=1 num=0
		}
		printf("\nnumber is %d : factorial is %d",ori,f);
	}	
	return 0;
}
