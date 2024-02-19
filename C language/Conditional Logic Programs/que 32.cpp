//32. Write a C program to input basic salary of an employee and calculate 
//its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
#include<stdio.h>
int main()
{
	int salary,HRA,DA;
	
	printf("enter the salary ");
	scanf("%d",&salary);
	
	if(salary<=10000)
	{
		HRA=(salary*20)/100;
		printf("\nHRA is %d",HRA);
		DA=(salary*80)/100;
		printf("\nDA is %d",DA);
	}
	
	else if(salary<=20000)
	{
		HRA=(salary*25)/100;
		printf("\nHRA is %d",HRA);
		DA=(salary*90)/100;
		printf("\nDA is %d",DA);
	}
	
	else if(salary>20000)
	{
		HRA=(salary*30)/100;
		printf("\nHRA is %d",HRA);
		DA=(salary*95)/100;
		printf("\nDA is %d",DA);
	}
	else
	{
		printf("enter valid input");
	}
	return 0;
}

