//9 C Program to Check Uppercase or Lowercase or Digit or Special 
//Character
#include<stdio.h>
int main()
{
	int ch;
	printf("enter the character(a-z,A-Z,Digit,special character) = ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("upper case letter ");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("lower case letter ");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("Digit (number)");
	}
	else
	{
		printf("special character");
	}
	return 0; 
	
}
