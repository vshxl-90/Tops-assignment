//8. WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char name[200];
	char n[200];
	printf("enter name ");
	gets(name);
	strcpy(n,name);
    strrev(n);
	if(strcmp(name,n)==0)
	{
		printf("\npalindrome");
	}
	else
	{
		printf("\nnot");
	}
}
