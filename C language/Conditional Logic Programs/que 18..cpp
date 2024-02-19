//18.Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>
int main() 
{
    int pp,sp;
    
    printf("Enter the purchese price :");
    scanf("%d",&pp);
    
    printf("Enter the sale price :");
    scanf("%d",&sp);
    
    if(pp<sp)
    {
    	printf("you are in profit :");
	}
	else if(pp>sp)
	{
		printf("you are in loss:");
	}
	else 
	{
		printf("no profit no loss :");
	}
    
    return 0;
}
