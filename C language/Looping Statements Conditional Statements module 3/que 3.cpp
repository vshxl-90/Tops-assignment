// WAP to take 10 no. Input from user find out below values

#include<stdio.h>

int main()
{
	int i,a;
	int total=0,total1=0;
	i=0;
	while(i<10)
	{
    	printf("Enter Number %d :",i+1);
		scanf("%d",&a);
    	i++;
    	if (a%2==0)
    	{
    		printf("Even number = %d\n",a);
    		total+=a;
		}
		else
		{
			printf("odd Number = %d \n",a);
			total1+=a;
		}
	}
	printf("Sum of even Number = %d\n",total);
	printf("Sum of odd number = %d\n",total1);
    return 0;
}
