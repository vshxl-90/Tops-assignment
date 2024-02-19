//14.Perform 2D matrix array 
#include<stdio.h>
int main()
{
	int row,col,num[2][2];
	printf("enter 4 values ");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&num[row][col]);
		}
	}
		for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",num[row][col]);
		}
		printf("\n");
	}
}
