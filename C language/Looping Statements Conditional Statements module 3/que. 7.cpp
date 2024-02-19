#include<stdio.h> 
int main()
{
	int num,rev=0,remainder;
	//input the number 
	printf("Enter a number");
	scanf("%d",&num);
	 
	//reverse the number using a loop 
	while(num!=0)
	{
		remainder=num%10;
		rev=rev*10+remainder;
		num=num/10;
	}
	printf("reversed numer : %d\n",rev);
	
}
