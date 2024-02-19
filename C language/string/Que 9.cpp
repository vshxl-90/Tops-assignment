//9. Write a program in C to find the maximum number of
//characters in a string.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count=0;
	char str[100];
	char mxRC,maxcount;
	printf("Enter a string: ");
	scanf("%s",&str);

	for(i=0;i<strlen(str);i++)
	{	count=0;
		for(j=0;j<strlen(str);j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
		if(maxcount<count)
		{
			maxcount=count;
			mxRC=str[i];
		}
	}
	printf("The char %c has been reapeated maximum of %d times",mxRC,maxcount);


	return 0;
}
