//16.Convert country�s name in 
//abbreviate form
#include<stdio.h>
int main()
{
	char c_name[20];
	printf("Enter country name :");
	scanf("%s",c_name);
	
	printf("abbreviated form is %c%c%c ",c_name[0],c_name[1],c_name[2]);
}
