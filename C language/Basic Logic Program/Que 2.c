//2. Write a program to make Simple calculator (to make
//addition, subtraction,multiplication, division and modulo)

#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("enter your 1st value :");
	scanf("%d",&a);
	printf("enter your 2st value :");
	scanf("%d",&b);
    
    printf("\ntotal addition : %d",a+b);
    
    printf("\ntotal subtraction: %d",a-b);
    
    printf("\ntotal multiplication :%d ",a*b);
    
    printf("\ntotal division %d:",a/b);
    
    printf("\ntotal modulo %d:",a%b);
    

    return 0;
}
