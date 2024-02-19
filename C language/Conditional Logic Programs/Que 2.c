//2. Write a C program to read the value of an integer m and display 
//the value ofn is 1 when m is larger than 0, 0 when m is 0 and -1 
//when m is less than 0
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value :");
	scanf("%d",&n);
	
	if(n>=0)
	{
		if(n==0)
		{
			printf("zero 0");
		}
		 else
		{
	    	printf(" plus +");
		}
	}
	else 
	{
		printf("minus -");
	}
	return 0;
}
