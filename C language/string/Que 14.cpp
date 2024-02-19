//14.Write a program in C to combine two strings manually
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("enter s1 ");
	scanf("%s",&s1);
	printf("enter s2 ");
	scanf("%s",&s2);
	strcat(s1," ");
	strcat(s1,s2);
	printf("%s",s1);
return 0;
}
