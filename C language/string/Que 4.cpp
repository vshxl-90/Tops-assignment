// Write a program in C to count the total number of words in a string.
#include<stdio.h>
int main()
{
	int i ,count=0;
	char str[50];
	printf("Enter a string: ");
	scanf("%s", &str);
//vishal'\0'
	for(i=0;str[i]!='\0';i++)
	
	
		{
			count++;
		}
	
	
		printf("The number of words are : %d",count);

	return 0;
}
