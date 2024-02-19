//Write a program in C to count the total number of alphabets, digits and special  characters in a string.
#include<stdio.h>
int main()
{
	char name[20];
	int alpha=0,digit=0,special=0,i=0;
	printf("enter name ");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='Z')
		{
			alpha++;
		}
		else if(name[i]>='0' && name[i]<='9')
		{
			digit++;
		}
		else
		{
			special++;
		}
		
	}
	printf("\nAlphabet is %d",alpha);
	printf("\nDigit is %d",digit);
	printf("\nSpecial is %d",special);
}
