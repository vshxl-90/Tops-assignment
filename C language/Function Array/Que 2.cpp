//2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
void addition(int a,int b);
void subtraction(int a,int b);
void multiplication(int a,int b);
void division(int a,int b);
int main()
{
     int n1,n2;
     char choice;
	 
	 printf("kindly enter choices(+,-,/,*) ");
	 scanf("%c",&choice);
	 printf("enter 2 values ");
	 scanf("%d %d",&n1,&n2);
	 switch(choice)
	 {
	 	case '+':
	 		addition(n1,n2);
	 		break;
	 	case '-':
	 		subtraction(n1,n2);
	 		break;
	 	case '*':
	 		multiplication(n1,n2);
	 		break;
	 	case '/':
	 		division(n1,n2);
	 		break;
	 	default:
	 		printf("kindly enter valid choice");
		 }	
}
void addition(int a,int b)
{
	printf("addition of a and b is %d",a+b);
}
void subtraction(int a,int b)
{
	printf("subtraction of a and b is %d",a-b);
}
void multiplication(int a,int b)
{
	printf("multiplication of a and b is %d",a*b);
}
void division(int a,int b)
{
	printf("division of a and b is %d",a/b);
}
