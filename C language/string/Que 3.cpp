//Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
int main()
{
	char name[50];
	printf("Enter string: ");
	scanf("%s",&name);
    
	printf("Reverse : %s",strrev(name)); 

	return 0;
}
