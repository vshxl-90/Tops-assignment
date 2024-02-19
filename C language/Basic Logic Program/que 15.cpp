//15.Convert school’s name in 
//abbreviated form
#include<stdio.h>
int main()
{
	char f_name[20],l_name[20];
	
	printf("enter first name :");
	scanf("%s",f_name);
	
	printf("enter last name :");
	scanf("%s",l_name);
	
	printf("\n abbreviated from %c.%s",f_name[0],l_name);
	return 0;
}
