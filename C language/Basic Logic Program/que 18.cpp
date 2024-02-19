//18.Calculate person’s Annual salary
#include<stdio.h>
int main()
{
    float monthlysalary,yearsalary;
    
	printf("enter your monthly salary  ");
	scanf("%f",&monthlysalary);
	
	yearsalary=monthlysalary*12;
	
	printf("annual salary is %f",yearsalary);
	
}
